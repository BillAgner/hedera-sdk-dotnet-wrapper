// DnHederaQueryGetAccountBalance.h

#pragma once
#include "hedera-query-get-account-balance.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaQueryGetAccountBalance
	{
	public:
		DnHederaQueryGetAccountBalance();

		static HederaQuery* HederaQueryGetAccountBalanceNewQuery(HederaClient* client, HederaAccountId account);

		static HederaError HederaQueryGetAccountBalanceAnswerToQuery(HederaQuery* query, HederaQueryGetAccountBalanceAnswer* answer);
	};
}