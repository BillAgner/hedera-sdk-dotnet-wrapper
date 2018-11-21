// DnHederaQuery.h

#pragma once
#include "hedera-query.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaQuery
	{
	public:
		DnHederaQuery();

		HederaError HederaQueryCost(HederaQuery*, uint64_t*);
	};
}