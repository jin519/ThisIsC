#include "Network.h"
#include <memory.h>

static size_t calcStreamSize(const DataType dataType, const size_t numValues);
static void encode(const DataType dataType, const size_t numValues, const void *const pData, uint8_t *const pStreamBuffer);

static DataType decodeDataType(const uint8_t* const pStreamBuffer);
static size_t decodeNumValues(const uint8_t* const pStreamBuffer);
static void decode(const uint8_t* const pStream, void* const pDataBuffer);

const NetworkManager networkMgr =
{
	calcStreamSize,
	encode,

	decodeDataType,
	decodeNumValues,
	decode
};	

size_t calcStreamSize(const DataType dataType, const size_t numValues)
{
	/*
		dataType	: ������ Ÿ��
		numValues	: �������� ����

		���� �� dataTypeMgr.getDataSize() �Լ��� Ȱ���� ��.
	*/

	size_t retVal = 0ULL;

	// Header Data
	retVal += sizeof(dataType);
	retVal += sizeof(numValues);

	// Raw Data
	retVal += (dataTypeMgr.getDataSize(dataType) * numValues);

	return retVal;
}

void encode(const DataType dataType, const size_t numValues, const void *const pData, uint8_t *const pStreamBuffer)
{
	/*
		dataType		: ������ Ÿ��
		numValues		: �������� ����
		pData			: ������ �迭
		pStreamBuffer	: ����ȭ�� ��Ʈ���� ����� ���� (�ܺο��� �Ҵ�����. �޸� �Ҵ��� �ʿ� ����.)

		pStreamBuffer�� ũ��� �ռ� ������ calcStreamSize() �κ��� ���ǹǷ�,
		pStreamBuffer �޸��� ũ�Ⱑ �߸��Ǿ� �ִٸ�
		calcStreamSize() �Լ��� ������ Ȯ���غ���.

		�ʿ信 ���� ������ �Լ��� �̿��� �� �ִ�.
		memcpy() (�ڼ��� ������ ���ͳ� �˻� ������ ����)
	*/

	uint8_t* pOffset = pStreamBuffer;

	// Header Data
	memcpy(pOffset, &dataType, sizeof(dataType));
	pOffset += sizeof(dataType);

	memcpy(pOffset, &numValues, sizeof(numValues));
	pOffset += sizeof(numValues);

	const size_t RAW_DATA_SIZE = (dataTypeMgr.getDataSize(dataType) * numValues);

	// Raw Data
	memcpy(pOffset, pData, RAW_DATA_SIZE);
}

DataType decodeDataType(const uint8_t *const pStreamBuffer)
{
	/*DataType retVal;
	memcpy(&retVal, pStreamBuffer, sizeof(retVal));
	return retVal;*/

	return *((DataType *)(pStreamBuffer));
}

size_t decodeNumValues(const uint8_t *const pStreamBuffer)
{
	/*size_t retVal;
	memcpy(&retVal, (pStreamBuffer + sizeof(DataType)), sizeof(retVal));
	return retVal;*/

	return *((size_t*)(pStreamBuffer + sizeof(DataType)));
}

void decode(const uint8_t *const pStream, void *const pDataBuffer)
{
	/*
		pStream			: ����ȭ�� ��Ʈ��
		pDataBuffer		: ���ڵ��� �����Ͱ� ����� ���� (�ܺο��� �Ҵ�����. �޸� �Ҵ��� �ʿ� ����.)

		pDataBuffer�� ũ��� �ռ� ������ decodeDataType()�� decodeNumValues()�κ��� ���ǹǷ�,
		pDataBuffer �޸��� ũ�Ⱑ �߸��Ǿ� �ִٸ� �� �Լ����� ������ Ȯ���غ���.

		�ʿ信 ���� ������ �Լ��� �̿��� �� �ִ�.
		memcpy()
	*/

	const DataType DATA_TYPE = networkMgr.decodeDataType(pStream);
	const size_t NUM_VALUES = networkMgr.decodeNumValues(pStream);
	
	// ������ Ÿ��, ������ ���� ���� (���) ��ŭ ������ �̵�

	const uint8_t* pOffset = pStream;
	pOffset += sizeof(DATA_TYPE);
	pOffset += sizeof(NUM_VALUES);

	memcpy(pDataBuffer, pOffset, (dataTypeMgr.getDataSize(DATA_TYPE) * NUM_VALUES));
}