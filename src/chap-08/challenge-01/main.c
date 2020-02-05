#include <stdio.h>
#include <limits.h>

int main() 
{
	int grade[5];
	const size_t SIZE = (sizeof(grade) / sizeof(grade[0]));

	printf("%llu�� �ɻ������� ���� �Է�: ", SIZE);

	int maxGrade = INT_MIN, minGrade = INT_MAX;
	size_t maxIdx, minIdx;

	for (size_t i = 0; i < SIZE; ++i)
	{
		scanf_s("%d", &grade[i]);

		const int CURRENT_GRADE = grade[i];

		if (maxGrade < CURRENT_GRADE)
		{
			maxGrade = CURRENT_GRADE;
			maxIdx = i;
		}

		if (minGrade > CURRENT_GRADE)
		{
			minGrade = CURRENT_GRADE;
			minIdx = i;
		}
	}

	int total = 0;
	float validGradeSize = 0.f;

	printf("��ȿ ����: ");

	for (size_t i = 0; i < SIZE; ++i)
	{
		if (i != maxIdx && i != minIdx)
		{
			const int VALID_GRADE = grade[i];

			printf("%d ", VALID_GRADE);

			total += VALID_GRADE;
			validGradeSize += 1.f;
		}
	}

	const float AVG = ((float)total / validGradeSize);

	printf("���: %.1f\n", AVG);

	return 0;
}