#pragma once

#include "DataType.h"
#include <stdint.h>

typedef struct
{
	size_t(*calcStreamSize)(const DataType dataType, const size_t numValues);
	void(*encode)(const DataType dataType, const size_t numValues, const void *const pData, uint8_t* const pStreamBuffer);

	DataType(*decodeDataType)(const uint8_t* const pStreamBuffer);
	size_t(*decodeNumValues)(const uint8_t* const pStreamBuffer);
	void(*decode)(const uint8_t* const pStream, void* const pDataBuffer);
}
NetworkManager;

extern const NetworkManager networkMgr;