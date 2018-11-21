// DnHederaTransactionCryptoTransfer.h

#pragma once
#include "hedera-transaction-crypto-transfer.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransactionCryptoTransfer
	{
	public:
		DnHederaTransactionCryptoTransfer();		

		HederaTransaction* HederaTransactionCryptoTransferNew(HederaClient* client);

		void HederaTransactionCryptoTransferAddTransfer(HederaTransaction* transaction, HederaAccountId id, int64_t amount);
	};
}