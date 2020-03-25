// 549p 예제 17-10 자기 참조 구조체로 list 만들기

#include <stdio.h>

struct List 
{
	int num;
	struct List* next;
};

int main()
{
	struct List a = { 10, NULL }, b = { 20, NULL }, c = { 30, NULL };
	struct List* head = &a;
	struct List* current = NULL;

	a.next = &b;
	b.next = &c;

	printf("head->num: %d\n", head->num);
	printf("head->next->num: %d\n", head->next->num);

	printf("list all: ");
	current = head;

	while (current) 
	{
		printf("%d ", current->num);
		current = current->next;
	}

	puts("");

	return 0;
}