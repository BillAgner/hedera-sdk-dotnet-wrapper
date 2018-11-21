#include "stdafx.h"
#include "DnHederaTransaction.h"


hederasdkdotnetwrapper::DnHederaTransaction::DnHederaTransaction()
{
}

void hederasdkdotnetwrapper::DnHederaTransaction::HederaTransactionSetOperator(HederaTransaction* transaction, HederaAccountId operator_)
{
	hedera_transaction_set_operator(transaction, operator_);
}

void hederasdkdotnetwrapper::DnHederaTransaction::HederaTransactionSetNode(HederaTransaction* transaction, HederaAccountId node)
{
	hedera_transaction_set_node(transaction, node);
}

void hederasdkdotnetwrapper::DnHederaTransaction::HederaTransactionSetMemo(HederaTransaction* transaction, const char * memo)
{
	hedera_transaction_set_memo(transaction, memo);
}

void hederasdkdotnetwrapper::DnHederaTransaction::HederaTransactionSign(HederaTransaction* transaction, HederaSecretKey key)
{
	hedera_transaction_sign(transaction, key);
}

HederaError hederasdkdotnetwrapper::DnHederaTransaction::HederaTransactionExecute(HederaTransaction* transaction, HederaTransactionResponse* response)
{
	return hedera_transaction_execute(transaction, response);
}
