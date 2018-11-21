#include "stdafx.h"
#include "DnHederaQueryGetAccountBalance.h"


hederasdkdotnetwrapper::DnHederaQueryGetAccountBalance::DnHederaQueryGetAccountBalance()
{
}

HederaQuery* hederasdkdotnetwrapper::DnHederaQueryGetAccountBalance::HederaQueryGetAccountBalanceNewQuery(HederaClient* client, HederaAccountId account)
{
	return hedera_query__get_account_balance__new(client, account);
}

HederaError hederasdkdotnetwrapper::DnHederaQueryGetAccountBalance::HederaQueryGetAccountBalanceAnswerToQuery(HederaQuery* query, HederaQueryGetAccountBalanceAnswer* balance)
{
	return hedera_query__get_account_balance__answer(query, balance);
}
