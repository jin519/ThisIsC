/*
	C������ ��/������ ǥ���ϱ� ���� �ּ� 1byte �̻���
	�޸� ������ ����Ͽ��� �Ѵ�. (char)

	�׷��� ��/������ ���� 1�� 0���θ� ǥ���Ǵ� ������ �ڷ��̱� ������
	8bits �� 7bits�� ����Ǵ�, ��ȿ������ �޸� ������� �� �� �ִ�.

	�� ���������� �̸� �����ϱ� ���� Custom �ڷᱸ���� �˰����� �����غ���.
*/

#include <stdio.h>
typedef unsigned int BoolList;
typedef unsigned int index_t;

/*
	���� 2.
	unsigned int�� 32���� bit�� ������ bool list �ڷᱸ���̴�.
	unsigned int�� ����(bool list)�� 1�̻� 31 ������ �ε����� �Է¹޾�
	�ε��� ��ġ�� �ش��ϴ� bit�� true Ȥ�� false�� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
*/
BoolList enableBit(const BoolList boolList, const index_t index)
{
	// boolList�� index��° �ش��ϴ� bit�� true�� �����Ѵ�.
	// �̹� true�� ���¶�� ��� true�� �����Ѵ�.

	return (boolList | (1 << (index - 1)));
}

BoolList disableBit(const BoolList boolList, const index_t index)
{
	// boolList�� index��° �ش��ϴ� bit�� false�� �����Ѵ�.
	// �̹� false�� ���¶�� ��� false�� �����Ѵ�.

	const BoolList FLAGGED_BITS = (1 << (index - 1));

	if (checkBit(boolList, FLAGGED_BITS))
		return (boolList ^ FLAGGED_BITS);

	return boolList;
}

unsigned int checkBit(const BoolList boolList, const BoolList FlaggedBits) 
{
	return (boolList & FlaggedBits);
}

/*
	���� 1���� �ۼ��� �Լ��� �̿��Ͻÿ�.
*/
void printBool(const unsigned int boolList)
{
	for (unsigned int n = 0; n < 32; ++n)
	{
		const BoolList FLAGGED_BITS = (1 << n);

		if (checkBit(boolList, FLAGGED_BITS))
			printf("%2u��° bit�� true�Դϴ�.\n", (n + 1));
	}

	puts("=============================");
}

int main()
{
	// (���ʿ�������) 2, 6, 7, 9, 11, 14��° bit�� true��.
	const unsigned int BOOL_LIST1 = 0b0010'0101'0110'0010U;
	printBool(BOOL_LIST1);

	unsigned int boolList2 = BOOL_LIST1;
	boolList2 = enableBit(boolList2, 1);
	boolList2 = enableBit(boolList2, 17);
	boolList2 = enableBit(boolList2, 23);
	boolList2 = enableBit(boolList2, 28);

	// 1, 2, 6, 7, 9, 11, 14, 17, 23, 28��° bit�� true��.
	printBool(boolList2);

	boolList2 = disableBit(boolList2, 1);
	boolList2 = disableBit(boolList2, 2);
	boolList2 = disableBit(boolList2, 3);
	boolList2 = disableBit(boolList2, 4);
	boolList2 = disableBit(boolList2, 5);
	boolList2 = disableBit(boolList2, 17);
	boolList2 = disableBit(boolList2, 23);
	boolList2 = disableBit(boolList2, 28);
	printBool(boolList2);

	return 0;
}