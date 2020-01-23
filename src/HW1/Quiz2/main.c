/*
	C에서는 참/거짓을 표현하기 위해 최소 1byte 이상의
	메모리 공간을 사용하여야 한다. (char)

	그러나 참/거짓은 각각 1과 0으로만 표현되는 진위형 자료이기 때문에
	8bits 중 7bits가 낭비되는, 비효율적인 메모리 사용임을 알 수 있다.

	본 과제에서는 이를 개선하기 위한 Custom 자료구조와 알고리즘을 구현해본다.
*/

#include <stdio.h>
typedef unsigned int BoolList;
typedef unsigned int index_t;

/*
	문제 2.
	unsigned int는 32개의 bit로 구성된 bool list 자료구조이다.
	unsigned int형 정수(bool list)와 1이상 31 이하의 인덱스를 입력받아
	인덱스 위치에 해당하는 bit를 true 혹은 false로 변환하는 함수를 작성하시오.
*/
BoolList enableBit(const BoolList boolList, const index_t index)
{
	// boolList의 index번째 해당하는 bit를 true로 변경한다.
	// 이미 true인 상태라면 계속 true를 유지한다.

	return (boolList | (1 << (index - 1)));
}

BoolList disableBit(const BoolList boolList, const index_t index)
{
	// boolList의 index번째 해당하는 bit를 false로 변경한다.
	// 이미 false인 상태라면 계속 false를 유지한다.
	
	const BoolList FLAGGED_BITS = (1 << (index - 1));

	return (boolList & ~FLAGGED_BITS);
}

/*
	문제 1에서 작성한 함수를 이용하시오.
*/
void printBool(const unsigned int boolList)
{
	for (unsigned int n = 0; n < 32; ++n)
	{
		const BoolList FLAGGED_BITS = (1 << n);

		if (boolList & FLAGGED_BITS)
			printf("%2u번째 bit는 true입니다.\n", (n + 1));
	}

	puts("=============================");
}

int main()
{
	// (왼쪽에서부터) 2, 6, 7, 9, 11, 14번째 bit가 true임.
	const unsigned int BOOL_LIST1 = 0b0010'0101'0110'0010U;
	printBool(BOOL_LIST1);

	unsigned int boolList2 = BOOL_LIST1;
	boolList2 = enableBit(boolList2, 1);
	boolList2 = enableBit(boolList2, 17);
	boolList2 = enableBit(boolList2, 23);
	boolList2 = enableBit(boolList2, 28);

	// 1, 2, 6, 7, 9, 11, 14, 17, 23, 28번째 bit가 true임.
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