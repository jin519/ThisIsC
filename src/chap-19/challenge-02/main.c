// 662p 도전 실전 예제 2번

#include <stdio.h>

typedef struct 
{
	int level;
	float standard[5];
	float data[5];
	float difference[5];
	float diffAvg;
} Height; 

//// 남자 아이 3단계 - 매크로 명 MALE이 정의되고, 매크로명 LEVEL이 3일 때
//#define MALE
//#define LEVEL 3

// 여자 아이 5단계 - 매크로 명 FEMALE이 정의되고, 매크로명 LEVEL이 5일 때
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

	printf("단계별 키 입력(%d단계): ", LEVEL_);

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
	printf("단계별 표준키와 차이: ");

	for (int i = 0; i < height->level; ++i)
		printf("%.1f ", height->difference[i]);

	printf("\n차이 평균: %.1f\n", height->diffAvg);
}