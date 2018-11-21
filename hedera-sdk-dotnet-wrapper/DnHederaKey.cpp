#include "stdafx.h"
#include "DnHederaKey.h"

hederasdkdotnetwrapper::DnHederaKey::DnHederaKey()
{
}

HederaSecretKey hederasdkdotnetwrapper::DnHederaKey::HederaSecretKeyGenerate()
{
	return hedera_secret_key_generate();
}

HederaError hederasdkdotnetwrapper::DnHederaKey::HederaSecretKeyFromStr(const char * s, HederaSecretKey* out)
{
	return hedera_secret_key_from_str(s, out);
}

char* hederasdkdotnetwrapper::DnHederaKey::HederaSecretKeyToStr(HederaSecretKey* secretKey)
{
	return hedera_secret_key_to_str(secretKey);
}

HederaPublicKey hederasdkdotnetwrapper::DnHederaKey::HederaPublicKeyFromSecretKey(HederaSecretKey* secretKey)
{
	return hedera_public_key_from_secret_key(secretKey);
}

char* hederasdkdotnetwrapper::DnHederaKey::HederaPublicKeyToStr(HederaPublicKey* publicKey)
{
	return hedera_public_key_to_str(publicKey);
}
