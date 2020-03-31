// 604p 예제 18-9 다양한 자료형을 형식에 맞게 입출력

#include <stdio.h>

int main()
{
	FILE* pInput = NULL;
	fopen_s(&pInput, "a.txt", "rt");

	if (pInput) 
	{
		FILE* pOutput = NULL;
		fopen_s(&pOutput, "b.txt", "wt");

		if (pOutput) 
		{
			char name[20] = { '\0' };
			int kor = 0, eng = 0, math = 0;

			while (fscanf_s(pInput, "%s%d%d%d", name, (unsigned int)sizeof(name), &kor, &eng, &math) != EOF) 
			{
				const int TOTAL = (kor + eng + math);
				const double AVG = (TOTAL / 3.0);

				fprintf_s(pOutput, "%s %d %.1lf\n", name, TOTAL, AVG);
			}

			_fcloseall(); 
		}
	}

	



	return 0;
}