// 623p 예제 19-1 사용자 정의 헤더 파일을 사용하는 프로그램

#include <stdio.h>
#include "Student.h"

int main() 
{
	Student student = { 315, "홍길동" };

	printf("학번: %d, 이름: %s\n", student.num, student.name);

	return 0;
}