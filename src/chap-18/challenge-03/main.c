// 619p 도전 실전 예제 3번

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_BOOK 10

typedef struct Book 
{
	char name[50]; 
	int sales;
} Book;

FILE* const openFile(const char* fileName, const char* mode)
{
	FILE* pStream = NULL;
	fopen_s(&pStream, fileName, mode);

	if (!pStream) 
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", fileName);
		exit(1); 
	}

	return pStream;
}

int checkDuplication(Book* books, const int bookSize, const char* name)
{
	for (int i = 0; i < bookSize; ++i) 
		if (!strcmp(books[i].name, name))
			return i;

	return -1;
}

int readFile(FILE* pStream, Book* books) 
{
	char name[50] = { '\0' };
	int cnt = 0; 

	while (fgets(name, sizeof(name), pStream))
	{
		name[strlen(name) - 1] = '\0';

		const int INDEX = checkDuplication(books, cnt, name);
		double price = 0.0;
		int circulation = 0;
		
		fscanf_s(pStream, "%lf%d", &price, &circulation);
		fgetc(pStream);

		const int FORMATTED_PRICE = (int)(price * 10000.0);

		if (INDEX < 0)
		{
			Book* const BOOK = (books + cnt++);
			strcpy_s(BOOK->name, sizeof(BOOK->name), name);
			BOOK->sales = (FORMATTED_PRICE * circulation);
		}
		else 
		{
			Book* const BOOK = (books + INDEX);
			BOOK->sales += (FORMATTED_PRICE * circulation);
		}
	}

	return cnt;
}

void sortBooks(Book* books, const int bookSize) 
{
	for (int i = 0; i < (bookSize - 1); ++i) 
		for (int j = (i + 1); j < bookSize; ++j) 
			if (books[i].sales < books[j].sales) 
			{
				Book tmp = books[i];
				books[i] = books[j];
				books[j] = tmp;
			}
}

void writeFile(FILE* pStream, Book* books, const int bookSize) 
{
	for (int i = 0; i < bookSize; ++i) 
	{
		Book* pBook = (books + i); 
		fprintf(pStream, "%d. %s - %d원\n", (i + 1), pBook->name, pBook->sales); 
	}
}

int main() 
{
	Book books[MAX_BOOK] = { 0 };
	FILE* pInput = openFile("a.txt", "rt");
	FILE* pOutput = openFile("b.txt", "wt");

	const int BOOK_SIZE = readFile(pInput, books);

	sortBooks(books, BOOK_SIZE);
	writeFile(pOutput, books, BOOK_SIZE);

	_fcloseall(); 

	return 0;
}