// DnHederaTransactionId.h

#pragma once
#include "hedera-transaction-id.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTransactionId
	{
	public:
		DnHederaTransactionId();

		static HederaTransactionId HederaTransactionIdNew(HederaAccountId accountId);

		static char* HederaTransactionIdToStr(HederaTransactionId transactionId);

		/// Parse a [HederaTransactionID] from a string.
		///
		/// Returns [HEDERA_ERROR_SUCCESS] (0) on success or any other value on error. Use [hedera_error_message] to retrieve
		/// a message for the error.
		static HederaError HederaTransactionIdFromStr(const char* s, HederaTransactionId* out);		
	};
}