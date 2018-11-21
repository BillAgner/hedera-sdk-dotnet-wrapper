// DnHederaTransactionId.h

#pragma once
#include "hedera-transaction-id.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransactionId
	{
	public:
		DnHederaTransactionId();

		static HederaTransactionId HederaTransactionIdNew(HederaAccountId account);

		static char* HederaTransactionIdToStr(HederaTransactionId* transaction);
	};
}