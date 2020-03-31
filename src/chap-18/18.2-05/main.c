// 614p 연습문제 5번

#include <stdio.h>
#include <string.h>

int main() 
{
	FILE* pInput = NULL;
	fopen_s(&pInput, "a.txt", "rt");

	if (!pInput)
		return 1;

	char name[20] = { '\0' };
	double weight = 0.0;
	double height = 0.0;

	fgets(name, sizeof(name), pInput);
	name[strlen(name) - 1] = '\0';

	fscanf_s(pInput, "%lf", &weight);
	fscanf_s(pInput, "%lf", &height);

	const double FORMATTED_HEIGHT = (height / 100.0);
	const double BMI = (weight / (FORMATTED_HEIGHT * FORMATTED_HEIGHT));

	fclose(pInput);

	FILE* pOutput = NULL;
	fopen_s(&pOutput, "b.txt", "wt");

	if (!pOutput)
		return 2;

	fprintf(pOutput, "이름: %s, BMI: %.1lf\n", name, BMI);
	fprintf(pOutput, "체중: %.1lfkg, 키: %.1lfcm\n", weight, height);

	fclose(pOutput);

	return 0;
}