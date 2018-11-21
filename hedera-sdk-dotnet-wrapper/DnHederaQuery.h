// DnHederaQuery.h

#pragma once
#include "hedera-query.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaQuery
	{
	public:
		DnHederaQuery();

		static HederaError HederaQueryCost(HederaQuery* query, uint64_t* cost);
	};
}