// 547p 예제 17-9 함수에서 -> 연산자를 이용하여 구조체 배열의 값 출력

#include <stdio.h>

struct Address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void printList(struct Address* address) 
{
	for (int i = 0; i < 5; ++i)
	{
		struct Address* LIST = (address + i);
		printf("%s %d %s %s\n", LIST->name, LIST->age, LIST->tel, LIST->addr);
	}
}

int main()
{
	struct Address list[5] =
	{
		{ "홍길동", 23, "111-1111", "울릉도 독도" },
		{ "이순신", 35, "222-2222", "서울 건천동" },
		{ "장보고", 19, "333-3333", "완도 청해진" },
		{ "유관순", 15, "444-4444", "충남 천안" },
		{ "안중근", 45, "555-5555", "황해도 해주" }
	};

	printList(list);

	return 0;
}