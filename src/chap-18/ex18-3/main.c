// 582p 예제 18-3 문자열을 한 문자씩 파일로 출력하기

#include <stdio.h>

int main()
{
	FILE* pStream = NULL;
	
	fopen_s(&pStream, "a.txt", "w");

	if (pStream)
	{
		const char STR[] = "banana";
		int i = 0;
		
		while (STR[i]) 
		{
			fputc(STR[i], pStream);
			i++;
		}

		fputc('\n', pStream); 
		fclose(pStream);
	}
	else
		puts("파일을 만들지 못했습니다."); 

	return 0;
}