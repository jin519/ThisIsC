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
	return 0ULL;
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
}

DataType decodeDataType(const uint8_t *const pStreamBuffer)
{
	return DT_INT;
}

size_t decodeNumValues(const uint8_t *const pStreamBuffer)
{
	return 0ULL;
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
}