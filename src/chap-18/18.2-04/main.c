// 614p 연습문제 4번

#include <stdio.h>
#include <stdbool.h>

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
			char tmp[20] = { '\0' };
			char name[20] = { '\0' };
			char address[100] = { '\0' };
			int id = 0, age = 0;
			double height = 0.0;

			while (true)
			{
				fscanf_s(pInput, "%s%d", tmp, (unsigned int)sizeof(tmp), &id);

				if (id == -1)
					break;

				fscanf_s(pInput, "%s%s", tmp, (unsigned int)sizeof(tmp), name, (unsigned int)sizeof(name));
				fscanf_s(pInput, "%s%d", tmp, (unsigned int)sizeof(tmp), &age);
				fscanf_s(pInput, "%s%lf", tmp, (unsigned int)sizeof(tmp), &height);

				fscanf_s(pInput, "%s", tmp, (unsigned int)sizeof(tmp));
				fgetc(pInput);
				fflush(pInput);

				fgets(address, sizeof(address), pInput);

				fprintf(pOutput, "%d\n%s %d %.1lf\n%s\n", id, name, age, height, address);
			}

			_fcloseall();
		}
	}

	return 0;
}