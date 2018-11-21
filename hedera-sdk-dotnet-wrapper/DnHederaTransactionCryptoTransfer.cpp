#include "stdafx.h"
#include "DnHederaTransactionCryptoTransfer.h"


hederasdkdotnetwrapper::DnHederaTransactionCryptoTransfer::DnHederaTransactionCryptoTransfer()
{
}

HederaTransaction * hederasdkdotnetwrapper::DnHederaTransactionCryptoTransfer::HederaTransactionCryptoTransferNew(HederaClient * client)
{
	return hedera_transaction__crypto_transfer__new(client);
}

void hederasdkdotnetwrapper::DnHederaTransactionCryptoTransfer::HederaTransactionCryptoTransferAddTransfer(HederaTransaction * transaction, HederaAccountId id, int64_t amount)
{
	hedera_transaction__crypto_transfer__add_transfer(transaction, id, amount);
}
