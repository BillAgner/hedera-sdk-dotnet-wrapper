#include "stdafx.h"
#include "DnHederaQuery.h"


hederasdkdotnetwrapper::DnHederaQuery::DnHederaQuery()
{
}

HederaError hederasdkdotnetwrapper::DnHederaQuery::HederaQueryCost(HederaQuery* query, uint64_t* cost)
{
	return hedera_query_cost(query, cost);
}
