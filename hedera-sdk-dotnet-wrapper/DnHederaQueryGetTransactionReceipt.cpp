#include "stdafx.h"
#include "DnHederaQueryGetTransactionReceipt.h"


hederasdkdotnetwrapper::DnHederaQueryGetTransactionReceipt::DnHederaQueryGetTransactionReceipt()
{
}

HederaQuery* hederasdkdotnetwrapper::DnHederaQueryGetTransactionReceipt::HederaQueryGetTransactionReceiptNewQuery(HederaClient* client, HederaTransactionId transaction_id)
{
	return hedera_query__get_transaction_receipt__new(client, transaction_id);
}

HederaError hederasdkdotnetwrapper::DnHederaQueryGetTransactionReceipt::HederaQueryGetTransactionReceiptAnswerToQuery(HederaQuery* query, HederaQueryGetTransactionReceiptAnswer* answer)
{
	return hedera_query__get_transaction_receipt__answer(query, answer);
}
