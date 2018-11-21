// DnHederaTransactionCryptoTransfer.h

#pragma once
#include "hedera-transaction-crypto-transfer.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransactionCryptoTransfer
	{
	public:
		DnHederaTransactionCryptoTransfer();		

		static HederaTransaction* HederaTransactionCryptoTransferNew(HederaClient* client);

		static void HederaTransactionCryptoTransferAddTransfer(HederaTransaction* transaction, HederaAccountId id, int64_t amount);
	};
}