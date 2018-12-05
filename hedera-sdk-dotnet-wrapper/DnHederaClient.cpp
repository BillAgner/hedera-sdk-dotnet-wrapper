#include "stdafx.h"
#include "DnHederaClient.h"


hederasdkdotnetwrapper::DnHederaClient::DnHederaClient()
{
}

HederaError hederasdkdotnetwrapper::DnHederaClient::HederaClientDial(const char* address, HederaClient** client)
{
	return hedera_client_dial(address, client);
}

void hederasdkdotnetwrapper::DnHederaClient::HederaClientClose(HederaClient* client)
{
	hedera_client_close(client);
}
