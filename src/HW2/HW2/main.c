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
	int targetData[] = { 1, 2, 3, 4, 5, 6 };
	const size_t NUM_ELEMENTS = (sizeof(targetData) / sizeof(targetData[0]));

	//// 4 + 8 + (4 * 6) = 36�� ���;� ��.
	const size_t streamSize =
		networkMgr.calcStreamSize(DT_INT, NUM_ELEMENTS);

	/*
		���� 2:
		��� �������� Ÿ�԰� ������ �˰� �ִٰ� ��������.
		�̸� ����ȭ�ϴ� encode() �Լ��� �����Ͽ���.

		(�Լ��� ������ Network.c, line 32���� �Ͻÿ�.)
	*/
	uint8_t* pStreamBuffer = malloc(streamSize);
	networkMgr.encode(DT_INT, NUM_ELEMENTS, targetData, pStreamBuffer);

	/*
		���� 3:
		� �����͸� ����ȭ�� ��Ʈ���� �ִٰ� ��������.
		�̷κ��� �������� Ÿ�԰� ������ �˾Ƴ���
		decodeDataType(), decodeNumValues() �Լ��� �����Ͽ���.

		(�Լ��� ������ Network.c, line 49, 54���� �Ͻÿ�.)
	*/
	// DT_INT�� ���;� ��.
	const DataType decodedDataType =
		networkMgr.decodeDataType(pStreamBuffer);

	// 6�� ���;� ��.
	const size_t decodedNumValues =
		networkMgr.decodeNumValues(pStreamBuffer);

	/*
		���� 4:
		� �����͸� ����ȭ�� ��Ʈ���� �ִٰ� ��������.
		�̸� �������� �ڷᱸ���� �����ϴ� decode() �Լ��� �����Ͽ���.

		(�Լ��� ������ Network.c, line 59���� �Ͻÿ�.)
	*/
	int* pDecodedData =
		malloc(dataTypeMgr.getDataSize(decodedDataType) * decodedNumValues);

	// pDecodedData�� 1, 2, 3, 4, 5, 6�� ����Ǿ�� ��.
	networkMgr.decode(pStreamBuffer, pDecodedData);

	for (size_t i = 0; i < decodedNumValues; i++)
		printf("%d ", pDecodedData[i]);

	free(pDecodedData);
	pDecodedData = NULL;

	free(pStreamBuffer);
	pStreamBuffer = NULL;

	return 0;
}