#include "stdafx.h"
#include "DnHederaError.h"


hederasdkdotnetwrapper::DnHederaError::DnHederaError()
{
}

char * hederasdkdotnetwrapper::DnHederaError::HederaErrorMessage(HederaError error)
{
	return hedera_error_message(error);
}
