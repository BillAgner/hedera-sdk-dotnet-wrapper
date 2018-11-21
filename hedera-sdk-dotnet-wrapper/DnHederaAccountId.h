// DnHederaAccountId.h

#pragma once
#include "hedera-account-id.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaAccountId
	{
	public:
		DnHederaAccountId();
		static HederaError HederaAccountIdFromStr(const char* s, HederaAccountId* out);
	};
}