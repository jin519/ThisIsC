// 596p 연습문제 5번

#include <stdio.h>

int main()
{
	FILE* pInput = NULL;
	fopen_s(&pInput, "input.txt", "rt");

	if (pInput) 
	{
		FILE* pOutput = NULL;
		fopen_s(&pOutput, "output.txt", "wt");

		if (pOutput) 
		{
			int ch = 0;
			int i = 0; 

			while ((ch = fgetc(pInput)) != EOF) 
			{
				fputc(ch, pOutput);

				if (ch == '.')
				{
					++i;
					fputc('\n', pOutput);

					if (!(i % 2))
						fputc('\n', pOutput);

					fseek(pInput, 1, SEEK_CUR);
				}
			}
		}
	}

	return 0;
}