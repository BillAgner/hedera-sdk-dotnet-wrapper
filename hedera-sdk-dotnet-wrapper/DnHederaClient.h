// DnHederaClient.h

#pragma once
#include "hedera-client.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaClient
	{
	public:
		DnHederaClient();

		/// Establish a connection to a Hedera node.
		/// Must be closed with [hedera_client_close].
		static HederaError HederaClientDial(const char* address, HederaClient**);

		/// Close and releases resources for a [HederaClient].
		static void HederaClientClose(HederaClient* client);
	};
}