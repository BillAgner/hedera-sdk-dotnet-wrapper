// DnHederaTransactionCreateAccount.h

#pragma once
#include "hedera-transaction-create-account.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransactionCreateAccount
	{
	public:
		DnHederaTransactionCreateAccount();
		
		static HederaTransaction* HederaTransactionCreateAccountNew(HederaClient* client);

		static void HederaTransactionCreateAccountSetInitialBalance(HederaTransaction* transaction, uint64_t balance);

		static void HederaTransactionCreateAccountSetKey(HederaTransaction* transaction, HederaPublicKey key);
	};
}