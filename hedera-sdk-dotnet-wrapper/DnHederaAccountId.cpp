#include "stdafx.h"
#include "DnHederaAccountId.h"


hederasdkdotnetwrapper::DnHederaAccountId::DnHederaAccountId()
{
}

HederaError hederasdkdotnetwrapper::DnHederaAccountId::HederaAccountIdFromStr(const char * s, HederaAccountId * out)
{
	return hedera_account_id_from_str(s, out);	
}
