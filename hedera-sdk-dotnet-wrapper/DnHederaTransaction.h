// DnHederaTransaction.h

#pragma once
#include "hedera-transaction.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransaction
	{
	public:
		DnHederaTransaction();

		static void HederaTransactionSetOperator(HederaTransaction* transaction, HederaAccountId operator_);

		static void HederaTransactionSetNode(HederaTransaction* transaction, HederaAccountId node);

		static void HederaTransactionSetMemo(HederaTransaction* transaction, const char* memo);

		static void HederaTransactionSign(HederaTransaction* transaction, HederaSecretKey key);

		static HederaError HederaTransactionExecute(HederaTransaction* transaction, HederaTransactionResponse* response);
	};
}