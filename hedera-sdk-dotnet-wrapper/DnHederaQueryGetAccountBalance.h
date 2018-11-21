// DnHederaQueryGetAccountBalance.h

#pragma once
#include "hedera-query-get-account-balance.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaQueryGetAccountBalance
	{
	public:
		DnHederaQueryGetAccountBalance();

		HederaQuery* HederaQueryGetAccountBalanceNewQuery(HederaClient*, HederaAccountId account);

		HederaError HederaQueryGetAccountBalanceAnswerToQuery(HederaQuery*, HederaQueryGetAccountBalanceAnswer*);
	};
}