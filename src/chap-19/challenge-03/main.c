// 662p 도전 실전 예제 3번

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