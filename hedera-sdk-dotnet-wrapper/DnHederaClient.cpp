#include "stdafx.h"
#include "DnHederaClient.h"


hederasdkdotnetwrapper::DnHederaClient::DnHederaClient()
{
}

HederaClient* hederasdkdotnetwrapper::DnHederaClient::HederaClientDial(const char * address)
{
	return hedera_client_dial(address);
}

void hederasdkdotnetwrapper::DnHederaClient::HederaClientClose(HederaClient* client)
{
	hedera_client_close(client);
}
