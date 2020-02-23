/*
	네트워크 상에서는 모든 데이터가 바이트 스트림으로 변환되어 전송된다.
	통신하는 두 단말 사이에서는 상호간 데이터를 전송하기 위해,
	자료구조를 바이트 스트림으로 변환(encode) 하는 작업과
	이를 다시 자료구조로 변환(decode) 하는 작업이 필요하다.

	어떠한 두 단말이 통신 중이라 가정할 때, 서로 자료를 주고 받을 수 있도록
	encode 및 decode 기능을 구현하여라.

	설명:
	바이트 스트림은 1byte의 unsigned 정수의 배열 형태로 이루어져 있으며,
	다음과 같은 순서와 구조를 가진다.

	[Header Data]
	1. 전송하려는 데이터의 타입 (int, 4 bytes, DataType.h 참고)
	2. 전송하려는 데이터의 수(배열의 크기) (size_t, 4 or 8 bytes)

	[Raw Data]
	3. 전송하고자 하는 데이터 (유동 사이즈, 위에서 입력한 데이터의 크기에 따라 다름)
*/

#include "Network.h"
#include <malloc.h>
#include <stdio.h>

int main()
{
	// 아래의 문제를 차례로 해결하시오.

	/*
		문제 1:
		어떠한 데이터의 타입과 개수를 알고 있다고 가정하자.
		이를 직렬화 하였을 때, 직렬화된 데이터의 크기를 계산하는
		calcStreamSize() 함수를 구현하여라.

		(함수의 구현은 Network.c, line 20에서 하시오.)
	*/

#define TARGET_DATA2_SIZE 1024
	double targetData2[TARGET_DATA2_SIZE];

	for (size_t i = 0; i < TARGET_DATA2_SIZE; i++)
		targetData2[i] = (((double)i) * 10.);

	const DataType dataType = DT_DOUBLE;

	const size_t streamSize =
		networkMgr.calcStreamSize(dataType, TARGET_DATA2_SIZE);

	/*
		문제 2:
		어떠한 데이터의 타입과 개수를 알고 있다고 가정하자.
		이를 직렬화하는 encode() 함수를 구현하여라.

		(함수의 구현은 Network.c, line 32에서 하시오.)
	*/
	uint8_t* pStreamBuffer = malloc(streamSize);
	networkMgr.encode(dataType, TARGET_DATA2_SIZE, targetData2, pStreamBuffer);

	/*
		문제 3:
		어떤 데이터를 직렬화한 스트림이 있다고 가정하자.
		이로부터 데이터의 타입과 개수를 알아내는
		decodeDataType(), decodeNumValues() 함수를 구현하여라.

		(함수의 구현은 Network.c, line 49, 54에서 하시오.)
	*/

	const DataType decodedDataType =
		networkMgr.decodeDataType(pStreamBuffer);

	const size_t decodedNumValues =
		networkMgr.decodeNumValues(pStreamBuffer);

	/*
		문제 4:
		어떤 데이터를 직렬화한 스트림이 있다고 가정하자.
		이를 원상태의 자료구조로 복구하는 decode() 함수를 구현하여라.

		(함수의 구현은 Network.c, line 59에서 하시오.)
	*/
	double* pDecodedData =
		malloc(dataTypeMgr.getDataSize(decodedDataType) * decodedNumValues);

	networkMgr.decode(pStreamBuffer, pDecodedData);

#define min(x, y) (((x) < (y)) ? (x) : (y))
	for (size_t i = 0; i < min(decodedNumValues, 10); i++)
		printf("%lf ", pDecodedData[i]);

	free(pDecodedData);
	pDecodedData = NULL;

	free(pStreamBuffer);
	pStreamBuffer = NULL;

	return 0;
}