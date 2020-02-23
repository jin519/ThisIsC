/*
	��Ʈ��ũ �󿡼��� ��� �����Ͱ� ����Ʈ ��Ʈ������ ��ȯ�Ǿ� ���۵ȴ�.
	����ϴ� �� �ܸ� ���̿����� ��ȣ�� �����͸� �����ϱ� ����,
	�ڷᱸ���� ����Ʈ ��Ʈ������ ��ȯ(encode) �ϴ� �۾���
	�̸� �ٽ� �ڷᱸ���� ��ȯ(decode) �ϴ� �۾��� �ʿ��ϴ�.

	��� �� �ܸ��� ��� ���̶� ������ ��, ���� �ڷḦ �ְ� ���� �� �ֵ���
	encode �� decode ����� �����Ͽ���.

	����:
	����Ʈ ��Ʈ���� 1byte�� unsigned ������ �迭 ���·� �̷���� ������,
	������ ���� ������ ������ ������.

	[Header Data]
	1. �����Ϸ��� �������� Ÿ�� (int, 4 bytes, DataType.h ����)
	2. �����Ϸ��� �������� ��(�迭�� ũ��) (size_t, 4 or 8 bytes)

	[Raw Data]
	3. �����ϰ��� �ϴ� ������ (���� ������, ������ �Է��� �������� ũ�⿡ ���� �ٸ�)
*/

#include "Network.h"
#include <malloc.h>
#include <stdio.h>

int main()
{
	// �Ʒ��� ������ ���ʷ� �ذ��Ͻÿ�.

	/*
		���� 1:
		��� �������� Ÿ�԰� ������ �˰� �ִٰ� ��������.
		�̸� ����ȭ �Ͽ��� ��, ����ȭ�� �������� ũ�⸦ ����ϴ�
		calcStreamSize() �Լ��� �����Ͽ���.

		(�Լ��� ������ Network.c, line 20���� �Ͻÿ�.)
	*/

#define TARGET_DATA2_SIZE 1024
	double targetData2[TARGET_DATA2_SIZE];

	for (size_t i = 0; i < TARGET_DATA2_SIZE; i++)
		targetData2[i] = (((double)i) * 10.);

	const DataType dataType = DT_DOUBLE;

	const size_t streamSize =
		networkMgr.calcStreamSize(dataType, TARGET_DATA2_SIZE);

	/*
		���� 2:
		��� �������� Ÿ�԰� ������ �˰� �ִٰ� ��������.
		�̸� ����ȭ�ϴ� encode() �Լ��� �����Ͽ���.

		(�Լ��� ������ Network.c, line 32���� �Ͻÿ�.)
	*/
	uint8_t* pStreamBuffer = malloc(streamSize);
	networkMgr.encode(dataType, TARGET_DATA2_SIZE, targetData2, pStreamBuffer);

	/*
		���� 3:
		� �����͸� ����ȭ�� ��Ʈ���� �ִٰ� ��������.
		�̷κ��� �������� Ÿ�԰� ������ �˾Ƴ���
		decodeDataType(), decodeNumValues() �Լ��� �����Ͽ���.

		(�Լ��� ������ Network.c, line 49, 54���� �Ͻÿ�.)
	*/

	const DataType decodedDataType =
		networkMgr.decodeDataType(pStreamBuffer);

	const size_t decodedNumValues =
		networkMgr.decodeNumValues(pStreamBuffer);

	/*
		���� 4:
		� �����͸� ����ȭ�� ��Ʈ���� �ִٰ� ��������.
		�̸� �������� �ڷᱸ���� �����ϴ� decode() �Լ��� �����Ͽ���.

		(�Լ��� ������ Network.c, line 59���� �Ͻÿ�.)
	*/
	double* pDecodedData =
		malloc(dataTypeMgr.getDataSize(decodedDataType) * decodedNumValues);

	networkMgr.decode(pStreamBuffer, pDecodedData);

#define min(x, y) (((x) < (y)) ? (x) : (y))
	for (size_t i = 0; i < min(decodedNumValues, 10); i++)
		printf("%lf ", pDecodedData[i]);

	free(pDecodedData);
	pDecodedData = NULL;

	free(pStreamBuffer);
	pStreamBuffer = NULL;

	return 0;
}