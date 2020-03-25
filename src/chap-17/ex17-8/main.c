// 545p 예제 17-8 구조체 배열을 초기화하고 출력

#include <stdio.h>

struct Address 
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

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

	for (int i = 0; i < 5; ++i) 
	{
		struct Address* LIST = (list + i);
		printf("%s %d %s %s\n", LIST->name, LIST->age, LIST->tel, LIST->addr);
	}

	return 0;
}