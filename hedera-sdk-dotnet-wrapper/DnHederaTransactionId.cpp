#include "stdafx.h"
#include "DnHederaTransactionId.h"


hederasdkdotnetwrapper::DnHederaTransactionId::DnHederaTransactionId()
{
}

HederaTransactionId hederasdkdotnetwrapper::DnHederaTransactionId::HederaTransactionIdNew(HederaAccountId account)
{
	return hedera_transaction_id_new(account);
}

char* hederasdkdotnetwrapper::DnHederaTransactionId::HederaTransactionIdToStr(HederaTransactionId* transaction)
{
	return hedera_transaction_id_to_str(transaction);
}
