// DnHederaTransaction.h

#pragma once
#include "hedera-transaction.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransaction
	{
	public:
		DnHederaTransaction();

		void HederaTransactionSetOperator(HederaTransaction*, HederaAccountId operator_);

		void HederaTransactionSetNode(HederaTransaction*, HederaAccountId node);

		void HederaTransactionSetMemo(HederaTransaction*, const char* memo);

		void HederaTransactionSign(HederaTransaction*, HederaSecretKey);

		HederaError HederaTransactionExecute(HederaTransaction*, HederaTransactionResponse*);
	};
}