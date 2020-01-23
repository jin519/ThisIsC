/*
	C에서는 참/거짓을 표현하기 위해 최소 1byte 이상의
	메모리 공간을 사용하여야 한다. (char)

	그러나 참/거짓은 각각 1과 0으로만 표현되는 진위형 자료이기 때문에
	8bits 중 7bits가 낭비되는, 비효율적인 메모리 사용임을 알 수 있다.

	본 과제에서는 이를 개선하기 위한 Custom 자료구조와 알고리즘을 구현해본다.
*/

#include <stdio.h>
typedef unsigned int BoolList;

/*
	문제 1.
	unsigned int는 32개의 bit로 구성된 bool list 자료구조이다.
	unsigned int형 정수를 입력받아 몇 번째 bit가 true인지 출력하는 함수를 작성하시오.
*/
void printBool(const BoolList boolList)
{
	for (unsigned int n = 0; n < 32; ++n)
	{
		unsigned int FLAGGED_BITS = (1 << n);
		
		if (FLAGGED_BITS & boolList)
			printf("%2u번째 bit는 true입니다.\n", (n + 1));
	}
}

int main()
{
	// (오른쪽에서부터) 2, 6, 7, 9, 11, 14번째 bit가 true임.
	const BoolList BOOL_LIST = 0b0010'0101'0110'0010U;
	printBool(BOOL_LIST);

	return 0;
}