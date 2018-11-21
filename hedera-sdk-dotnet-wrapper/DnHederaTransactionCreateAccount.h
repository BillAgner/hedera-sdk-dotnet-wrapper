// DnHederaTransactionCreateAccount.h

#pragma once
#include "hedera-transaction-create-account.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransactionCreateAccount
	{
	public:
		DnHederaTransactionCreateAccount();
		
		HederaTransaction* HederaTransactionCreateAccountNew(HederaClient* client);

		void HederaTransactionCreateAccountSetInitialBalance(HederaTransaction* transaction, uint64_t balance);

		void HederaTransactionCreateAccountSetKey(HederaTransaction* transaction, HederaPublicKey key);
	};
}