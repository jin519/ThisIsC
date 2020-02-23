#pragma once

#include <stdint.h>

typedef enum
{
	DT_INT = 0x100000,
	DT_FLOAT,
	DT_DOUBLE
}
DataType;


typedef struct
{
	size_t(*getDataSize)(const DataType type);
}
DataTypeManager;

extern const DataTypeManager dataTypeMgr;