#include "stdafx.h"
#include "DnHederaTransactionCreateAccount.h"


hederasdkdotnetwrapper::DnHederaTransactionCreateAccount::DnHederaTransactionCreateAccount()
{
}

HederaTransaction * hederasdkdotnetwrapper::DnHederaTransactionCreateAccount::HederaTransactionCreateAccountNew(HederaClient * client)
{
	return hedera_transaction__create_account__new(client);
}

void hederasdkdotnetwrapper::DnHederaTransactionCreateAccount::HederaTransactionCreateAccountSetInitialBalance(HederaTransaction * transaction, uint64_t balance)
{
	hedera_transaction__create_account__set_initial_balance(transaction, balance);
}

void hederasdkdotnetwrapper::DnHederaTransactionCreateAccount::HederaTransactionCreateAccountSetKey(HederaTransaction * transaction, HederaPublicKey key)
{
	hedera_transaction__create_account__set_key(transaction, key);
}
