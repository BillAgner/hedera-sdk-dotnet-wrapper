#include "stdafx.h"
#include "DnHederaTransactionId.h"


hederasdkdotnetwrapper::DnHederaTransactionId::DnHederaTransactionId()
{
}

HederaTransactionId hederasdkdotnetwrapper::DnHederaTransactionId::HederaTransactionIdNew(HederaAccountId accountId)
{
	return hedera_transaction_id_new(accountId);
}

char* hederasdkdotnetwrapper::DnHederaTransactionId::HederaTransactionIdToStr(HederaTransactionId transactionId)
{
	return hedera_transaction_id_to_str(transactionId);
}

HederaError hederasdkdotnetwrapper::DnHederaTransactionId::HederaTransactionIdFromStr(const char * s, HederaTransactionId * out)
{
	return hedera_transaction_id_from_str(s, out);
}