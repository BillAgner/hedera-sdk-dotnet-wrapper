// DnHederaQueryGetTransactionReceipt.h

#pragma once
#include "hedera-query-get-transaction-receipt.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaQueryGetTransactionReceipt
	{
	public:
		DnHederaQueryGetTransactionReceipt();

		static HederaQuery* HederaQueryGetTransactionReceiptNewQuery(
			HederaClient* client,
			HederaTransactionId transaction_id
		);

		static HederaError HederaQueryGetTransactionReceiptAnswerToQuery(HederaQuery* query, HederaQueryGetTransactionReceiptAnswer* answer);
	};
}