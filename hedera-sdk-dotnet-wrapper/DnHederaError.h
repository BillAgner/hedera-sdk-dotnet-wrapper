// DnHederaError.h

#pragma once
#include "hedera-error.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaError
	{
	public:
		DnHederaError();

		/// Return a message corresponding to the passing in error. Returns [NULL] if there is no corresponding error.
		/// Error messages may only be obtained once.
		static char* HederaErrorMessage(HederaError error);
	};
}
