// DnHederaQueryGetTransactionReceipt.h

#pragma once
#include "hedera-query-get-transaction-receipt.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaQueryGetTransactionReceipt
	{
	public:
		DnHederaQueryGetTransactionReceipt();

		HederaQuery* HederaQueryGetTransactionReceiptNew(
			HederaClient*,
			HederaTransactionId transaction_id
		);

		HederaError HederaQuery_GetTransactionReceiptAnswer(HederaQuery*, HederaQueryGetTransactionReceiptAnswer*);
	};
}