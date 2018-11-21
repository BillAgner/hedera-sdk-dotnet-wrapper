#include "stdafx.h"
#include "DnHederaTimestamp.h"


hederasdkdotnetwrapper::DnHederaTimestamp::DnHederaTimestamp()
{
}

HederaTimestamp hederasdkdotnetwrapper::DnHederaTimestamp::HederaTimestampNow()
{
	return hedera_timestamp_now();
}
