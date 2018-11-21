// DnHederaTimestamp.h

#pragma once
#include "hedera-timestamp.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaTimestamp
	{
	public:
		DnHederaTimestamp();

		static HederaTimestamp HederaTimestampNow();
	};
}