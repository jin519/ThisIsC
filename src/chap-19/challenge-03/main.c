// 662p ���� ���� ���� 3��

#include "Func.h"

int main() 
{
	Friend myFriend[BEST_CNT];
	Friend oldest; 

	inputData(myFriend);
	oldest = getOldestFriend(myFriend);
	printData(&oldest);

	return 0;
}