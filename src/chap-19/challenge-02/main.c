// 662p ���� ���� ���� 2��

#include <stdio.h>

typedef struct 
{
	int level;
	float standard[5];
	float data[5];
	float difference[5];
	float diffAvg;
} Height; 

//// ���� ���� 3�ܰ� - ��ũ�� �� MALE�� ���ǵǰ�, ��ũ�θ� LEVEL�� 3�� ��
//#define MALE
//#define LEVEL 3

// ���� ���� 5�ܰ� - ��ũ�� �� FEMALE�� ���ǵǰ�, ��ũ�θ� LEVEL�� 5�� ��
#define FEMALE
#define LEVEL 5

void init(Height* const height, const int level);
void inputData(Height* const height);
void calculate(Height* const height);
void print(Height* const height);

int main() 
{
	Height height = { 0, 0.f };

	init(&height, LEVEL);
	inputData(&height);
	calculate(&height);
	print(&height);

	return 0; 
}

void init(Height* const height, const int level)
{
#ifdef MALE
	if (level == 3)
	{
		height->standard[0] = 49.4f;
		height->standard[1] = 74.8f;
		height->standard[2] = 85.f;
	}
	else if (level == 5)
	{
		height->standard[0] = 49.4f;
		height->standard[1] = 66.3f;
		height->standard[2] = 74.8f;
		height->standard[3] = 79.9f;
		height->standard[4] = 85.f;
	}
#endif

#ifdef FEMALE
	if (level == 3)
	{
		height->standard[0] = 50.1f;
		height->standard[1] = 76.f;
		height->standard[2] = 86.2f;
	}
	else if (level == 5)
	{
		height->standard[0] = 50.1f;
		height->standard[1] = 67.6f;
		height->standard[2] = 76.f;
		height->standard[3] = 81.2f;
		height->standard[4] = 86.2f;
	}
#endif

	height->level = level;
}

void inputData(Height* const height)
{
	const int LEVEL_ = height->level;

	printf("�ܰ躰 Ű �Է�(%d�ܰ�): ", LEVEL_);

	for (int i = 0; i < LEVEL_; ++i)
		scanf_s("%f", (height->data + i));
}

void calculate(Height* const height)
{
	float sum = 0.f;
	const int LEVEL_ = height->level;

	for (int i = 0; i < LEVEL_; ++i)
	{
		const float DIFF = (height->data[i] - height->standard[i]);

		height->difference[i] = DIFF;
		sum += DIFF;
	}

	height->diffAvg = (sum / (float)LEVEL_);
}

void print(Height* const height)
{
	printf("�ܰ躰 ǥ��Ű�� ����: ");

	for (int i = 0; i < height->level; ++i)
		printf("%.1f ", height->difference[i]);

	printf("\n���� ���: %.1f\n", height->diffAvg);
}