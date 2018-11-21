// DnHederaTransactionId.h

#pragma once
#include "hedera-transaction-id.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransactionId
	{
	public:
		DnHederaTransactionId();

		HederaTransactionId HederaTransactionIdNew(HederaAccountId account);

		char* HederaTransactionIdToStr(HederaTransactionId* transaction);
	};
}