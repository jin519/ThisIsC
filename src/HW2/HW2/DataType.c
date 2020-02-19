#include "DataType.h"

static size_t getDataSize(const DataType type);

const DataTypeManager dataTypeMgr =
{
	getDataSize
};

size_t getDataSize(const DataType type)
{
	switch (type)
	{
	case DT_INT:
	case DT_FLOAT:
		return 4ULL;

	case DT_DOUBLE:
		return 8ULL;
	}

	return 0ULL;
}