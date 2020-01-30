#include <stdio.h>

int main() 
{
	int meterageInput;
	double basicFee = 0;
	double additionalFee = 0;
	double totalFee = 0;

	printf("전기 사용량을 입력하세요(kw): ");
	scanf_s("%d", &meterageInput);

	const double METERAGE = (double)meterageInput;
	const double FEE_RATIO = 100.0; 

	switch (meterageInput / 100)
	{
	default:
		if (!basicFee)
			basicFee = 9330.0;

		additionalFee += ((METERAGE - 500.0) * 494.0);

	case 4:
		if (!basicFee)
			basicFee = 5130.0;

		if (meterageInput <= 500) // 401 ~ 500
			additionalFee += ((METERAGE - 400.0) * 274.3);
		else
			additionalFee += (FEE_RATIO * 274.3);

	case 3:
		if (!basicFee)
			basicFee = 2710.0;

		if (meterageInput <= 400) // 301 ~ 400
			additionalFee += ((METERAGE - 300.0) * 184.3);
		else
			additionalFee += (FEE_RATIO * 184.3);

	case 2:
		if (!basicFee)
			basicFee = 1130.0;

		if (meterageInput <= 300) // 201 ~ 300
			additionalFee += ((METERAGE - 200.0) * 127.8);
		else
			additionalFee += (FEE_RATIO * 127.8);

	case 1:
		if (!basicFee)
			basicFee = 660.0;

		if (meterageInput <= 200) // 101 ~ 200
			additionalFee += ((METERAGE - 100.0) * 88.5);
		else
			additionalFee += (FEE_RATIO * 88.5);

	case 0:
		if (!basicFee)
			basicFee = 370.0;

		if (meterageInput <= 100) // 1 ~ 100
			additionalFee += (METERAGE * 52.0);
		else
			additionalFee += (FEE_RATIO * 52.0);
	}

	//if (meterageInput > 0) // 1 ~
	//{
	//	basicFee = 370.0;

	//	if (meterageInput <= 100) // 1 ~ 100
	//		additionalFee += (METERAGE * 52.0);
	//	else
	//		additionalFee += (FEE_RATIO * 52.0);
	//}

	//if (meterageInput > 100) // 101 ~
	//{
	//	basicFee = 660.0;

	//	if (meterageInput <= 200) // 101 ~ 200
	//		additionalFee += ((METERAGE - 100.0) * 88.5);
	//	else
	//		additionalFee += (FEE_RATIO * 88.5);
	//}

	//if (meterageInput > 200) // 201 ~ 
	//{
	//	basicFee = 1130.0;

	//	if (meterageInput <= 300) // 201 ~ 300
	//		additionalFee += ((METERAGE - 200.0) * 127.8);
	//	else
	//		additionalFee += (FEE_RATIO * 127.8);
	//}

	//if (meterageInput > 300) // 301 ~ 
	//{
	//	basicFee = 2710.0;

	//	if (meterageInput <= 400) // 301 ~ 400
	//		additionalFee += ((METERAGE - 300.0) * 184.3);
	//	else
	//		additionalFee += (FEE_RATIO * 184.3);
	//}

	//if (meterageInput > 400) // 401 ~ 
	//{
	//	basicFee = 5130.0;

	//	if (meterageInput <= 500) // 401 ~ 500
	//		additionalFee += ((METERAGE - 400.0) * 274.3);
	//	else
	//		additionalFee += (FEE_RATIO * 274.3);
	//}

	//if (meterageInput > 500) // 501 ~
	//{
	//	basicFee = 9330.0;
	//	additionalFee += ((METERAGE - 500.0) * 494.0);
	//}

	totalFee = (basicFee + additionalFee);
	totalFee *= 1.09;

	printf("이번 달 요금은 %d원입니다.", (int)totalFee);
	
	return 0;
}