#include "Network.h"
#include <memory.h>

static size_t calcStreamSize(const DataType dataType, const size_t numValues);
static void encode(const DataType dataType, const size_t numValues, const void *const pData, uint8_t *const pStreamBuffer);

static DataType decodeDataType(const uint8_t* const pStreamBuffer);
static size_t decodeNumValues(const uint8_t* const pStreamBuffer);
static void decode(const uint8_t* const pStream, void* const pDataBuffer);

const NetworkManager networkMgr =
{
	calcStreamSize,
	encode,

	decodeDataType,
	decodeNumValues,
	decode
};	

size_t calcStreamSize(const DataType dataType, const size_t numValues)
{
	/*
		dataType	: 데이터 타입
		numValues	: 데이터의 개수

		구현 시 dataTypeMgr.getDataSize() 함수를 활용할 것.
	*/
	return 0ULL;
}

void encode(const DataType dataType, const size_t numValues, const void *const pData, uint8_t *const pStreamBuffer)
{
	/*
		dataType		: 데이터 타입
		numValues		: 데이터의 개수
		pData			: 데이터 배열
		pStreamBuffer	: 직렬화된 스트림을 기록할 버퍼 (외부에서 할당해줌. 메모리 할당할 필요 없음.)

		pStreamBuffer의 크기는 앞서 구현한 calcStreamSize() 로부터 계산되므로,
		pStreamBuffer 메모리의 크기가 잘못되어 있다면
		calcStreamSize() 함수의 구현을 확인해보자.

		필요에 따라 다음의 함수를 이용할 수 있다.
		memcpy() (자세한 정보는 인터넷 검색 정보를 참고)
	*/
}

DataType decodeDataType(const uint8_t *const pStreamBuffer)
{
	return DT_INT;
}

size_t decodeNumValues(const uint8_t *const pStreamBuffer)
{
	return 0ULL;
}

void decode(const uint8_t *const pStream, void *const pDataBuffer)
{
	/*
		pStream			: 직렬화된 스트림
		pDataBuffer		: 디코딩된 데이터가 저장될 버퍼 (외부에서 할당해줌. 메모리 할당할 필요 없음.)

		pDataBuffer의 크기는 앞서 구현한 decodeDataType()와 decodeNumValues()로부터 계산되므로,
		pDataBuffer 메모리의 크기가 잘못되어 있다면 위 함수들의 구현을 확인해보자.

		필요에 따라 다음의 함수를 이용할 수 있다.
		memcpy()
	*/
}