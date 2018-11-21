// DnHederaKey.h

#pragma once
#include "hedera-key.h"

using namespace System;

namespace hederasdkdotnetwrapper {

	public ref class DnHederaKey
	{
	public:
		DnHederaKey();
		/// Generate a new [HederaSecretKey] from a cryptographically secure pseudo-random number generator (CSPRNG).
		HederaSecretKey HederaSecretKeyGenerate();

		/// Parse a [HederaSecretKey] from a hex-encoded string.
		///
		/// Returns [HEDERA_ERROR_SUCCESS] (0) on success or any other value on error. Use [hedera_error_message] to retrieve
		/// a message for the error.
		HederaError HederaSecretKeyFromStr(const char* s, HederaSecretKey* out);

		/// Format a [HederaSecretKey] as a hex-encoded string of the secret key encoded with a PKCS #8 wrapper (
		/// defined in RFC 5208).
		///
		/// Returns ownership of the string. Must be freed with [free].
		char* HederaSecretKeyToStr(HederaSecretKey*);
		
		/// Derive a [HederaPublicKey] from a [HederaSecretKey].
		HederaPublicKey HederaPublicKeyFromSecretKey(HederaSecretKey*);

		/// Format a [HederaPublicKey] as a hex-encoded string of the secret key encoded with a PKIX wrapper (
		/// defined in RFC 3280).
		///
		/// Returns ownership of the string. Must be freed with [free].
		char* HederaPublicKeyToStr(HederaPublicKey*);
	};
}
