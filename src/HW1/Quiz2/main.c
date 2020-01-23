/*
	C������ ��/������ ǥ���ϱ� ���� �ּ� 1byte �̻���
	�޸� ������ ����Ͽ��� �Ѵ�. (char)

	�׷��� ��/������ ���� 1�� 0���θ� ǥ���Ǵ� ������ �ڷ��̱� ������
	8bits �� 7bits�� ����Ǵ�, ��ȿ������ �޸� ������� �� �� �ִ�.

	�� ���������� �̸� �����ϱ� ���� Custom �ڷᱸ���� �˰����� �����غ���.
*/

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

	return 0U;
}

BoolList disableBit(const BoolList boolList, const index_t index)
{
	// boolList�� index��° �ش��ϴ� bit�� false�� �����Ѵ�.
	// �̹� false�� ���¶�� ��� false�� �����Ѵ�.

	return 0U;
}

/*
	���� 1���� �ۼ��� �Լ��� �̿��Ͻÿ�.
*/
void printBool(const unsigned int boolList)
{

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

	return 0;
}