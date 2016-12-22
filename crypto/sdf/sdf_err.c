/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/gmsdf.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_SDF,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_SDF,0,reason)

static ERR_STRING_DATA SDF_str_functs[] = {
    {ERR_FUNC(SDF_F_SDF_CALCULATEMAC), "SDF_CalculateMAC"},
    {ERR_FUNC(SDF_F_SDF_DECODE_EC_SIGNATURE), "sdf_decode_ec_signature"},
    {ERR_FUNC(SDF_F_SDF_DECRYPT), "SDF_Decrypt"},
    {ERR_FUNC(SDF_F_SDF_ENCODE_EC_SIGNATURE), "sdf_encode_ec_signature"},
    {ERR_FUNC(SDF_F_SDF_ENCRYPT), "SDF_Encrypt"},
    {ERR_FUNC(SDF_F_SDF_EXPORTENCPUBLICKEY_ECC),
     "SDF_ExportEncPublicKey_ECC"},
    {ERR_FUNC(SDF_F_SDF_EXPORTENCPUBLICKEY_RSA),
     "SDF_ExportEncPublicKey_RSA"},
    {ERR_FUNC(SDF_F_SDF_EXPORTSIGNPUBLICKEY_ECC),
     "SDF_ExportSignPublicKey_ECC"},
    {ERR_FUNC(SDF_F_SDF_EXPORTSIGNPUBLICKEY_RSA),
     "SDF_ExportSignPublicKey_RSA"},
    {ERR_FUNC(SDF_F_SDF_EXTERNALDECRYPT_ECC), "SDF_ExternalDecrypt_ECC"},
    {ERR_FUNC(SDF_F_SDF_EXTERNALENCRYPT_ECC), "SDF_ExternalEncrypt_ECC"},
    {ERR_FUNC(SDF_F_SDF_EXTERNALPRIVATEKEYOPERATION_RSA),
     "SDF_ExternalPrivateKeyOperation_RSA"},
    {ERR_FUNC(SDF_F_SDF_EXTERNALPUBLICKEYOPERATION_RSA),
     "SDF_ExternalPublicKeyOperation_RSA"},
    {ERR_FUNC(SDF_F_SDF_EXTERNALSIGN_ECC), "SDF_ExternalSign_ECC"},
    {ERR_FUNC(SDF_F_SDF_EXTERNALVERIFY_ECC), "SDF_ExternalVerify_ECC"},
    {ERR_FUNC(SDF_F_SDF_GENERATEKEYPAIR_ECC), "SDF_GenerateKeyPair_ECC"},
    {ERR_FUNC(SDF_F_SDF_GENERATEKEYPAIR_RSA), "SDF_GenerateKeyPair_RSA"},
    {ERR_FUNC(SDF_F_SDF_GENERATEKEYWITHEPK_ECC),
     "SDF_GenerateKeyWithEPK_ECC"},
    {ERR_FUNC(SDF_F_SDF_GENERATEKEYWITHEPK_RSA),
     "SDF_GenerateKeyWithEPK_RSA"},
    {ERR_FUNC(SDF_F_SDF_GENERATEKEYWITHIPK_ECC),
     "SDF_GenerateKeyWithIPK_ECC"},
    {ERR_FUNC(SDF_F_SDF_GENERATEKEYWITHIPK_RSA),
     "SDF_GenerateKeyWithIPK_RSA"},
    {ERR_FUNC(SDF_F_SDF_GENERATERANDOM), "SDF_GenerateRandom"},
    {ERR_FUNC(SDF_F_SDF_GETDEVICEINFO), "SDF_GetDeviceInfo"},
    {ERR_FUNC(SDF_F_SDF_GETPRIVATEKEYACCESSRIGHT),
     "SDF_GetPrivateKeyAccessRight"},
    {ERR_FUNC(SDF_F_SDF_GET_CIPHER), "sdf_get_cipher"},
    {ERR_FUNC(SDF_F_SDF_GET_DIGEST), "sdf_get_digest"},
    {ERR_FUNC(SDF_F_SDF_HASHFINAL), "SDF_HashFinal"},
    {ERR_FUNC(SDF_F_SDF_HASHINIT), "SDF_HashInit"},
    {ERR_FUNC(SDF_F_SDF_HASHUPDATE), "SDF_HashUpdate"},
    {ERR_FUNC(SDF_F_SDF_IMPORTKEY), "SDF_ImportKey"},
    {ERR_FUNC(SDF_F_SDF_IMPORTKEYWITHISK_ECC), "SDF_ImportKeyWithISK_ECC"},
    {ERR_FUNC(SDF_F_SDF_IMPORTKEYWITHISK_RSA), "SDF_ImportKeyWithISK_RSA"},
    {ERR_FUNC(SDF_F_SDF_INTERNALDECRYPT_ECC), "SDF_InternalDecrypt_ECC"},
    {ERR_FUNC(SDF_F_SDF_INTERNALENCRYPT_ECC), "SDF_InternalEncrypt_ECC"},
    {ERR_FUNC(SDF_F_SDF_INTERNALPRIVATEKEYOPERATION_RSA),
     "SDF_InternalPrivateKeyOperation_RSA"},
    {ERR_FUNC(SDF_F_SDF_INTERNALPUBLICKEYOPERATION_RSA),
     "SDF_InternalPublicKeyOperation_RSA"},
    {ERR_FUNC(SDF_F_SDF_INTERNALSIGN_ECC), "SDF_InternalSign_ECC"},
    {ERR_FUNC(SDF_F_SDF_INTERNALVERIFY_ECC), "SDF_InternalVerify_ECC"},
    {ERR_FUNC(SDF_F_SDF_LOAD_EC_PRIVATE_KEY), "sdf_load_ec_private_key"},
    {ERR_FUNC(SDF_F_SDF_LOAD_EC_PUBLIC_KEY), "sdf_load_ec_public_key"},
    {ERR_FUNC(SDF_F_SDF_LOAD_RSA_PRIVATE_KEY), "sdf_load_rsa_private_key"},
    {ERR_FUNC(SDF_F_SDF_LOAD_RSA_PUBLIC_KEY), "sdf_load_rsa_public_key"},
    {ERR_FUNC(SDF_F_SDF_OPENDEVICE), "SDF_OpenDevice"},
    {0, NULL}
};

static ERR_STRING_DATA SDF_str_reasons[] = {
    {ERR_REASON(SDF_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(SDF_R_BUUTER_TOO_SMALL), "buuter too small"},
    {ERR_REASON(SDF_R_CBCMAC_FAILURE), "cbcmac failure"},
    {ERR_REASON(SDF_R_ENGINE_LOAD_KEY_FAILURE), "engine load key failure"},
    {ERR_REASON(SDF_R_GET_PRIVATE_KEY_FAILED), "get private key failed"},
    {ERR_REASON(SDF_R_GET_PUBLIC_KEY_FAILED), "get public key failed"},
    {ERR_REASON(SDF_R_INVALID_ALGOR), "invalid algor"},
    {ERR_REASON(SDF_R_INVALID_EC_CIPHERTEXT), "invalid ec ciphertext"},
    {ERR_REASON(SDF_R_INVALID_EC_PRIVATE_KEY), "invalid ec private key"},
    {ERR_REASON(SDF_R_INVALID_EC_PUBLIC_KEY), "invalid ec public key"},
    {ERR_REASON(SDF_R_INVALID_INPUT_LENGTH), "invalid input length"},
    {ERR_REASON(SDF_R_INVALID_KEY_HANDLE), "invalid key handle"},
    {ERR_REASON(SDF_R_INVALID_KEY_LENGTH), "invalid key length"},
    {ERR_REASON(SDF_R_INVALID_KEY_USAGE), "invalid key usage"},
    {ERR_REASON(SDF_R_INVALID_LENGTH), "invalid length"},
    {ERR_REASON(SDF_R_INVALID_OPERATION_STATE), "invalid operation state"},
    {ERR_REASON(SDF_R_KEY_TYPE_NOT_MATCH), "key type not match"},
    {ERR_REASON(SDF_R_RANDOM_FAILURE), "random failure"},
    {ERR_REASON(SDF_R_SDF_SESSION_NO_ENGINE), "sdf session no engine"},
    {0, NULL}
};

#endif

int ERR_load_SDF_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(SDF_str_functs[0].error) == NULL) {
        ERR_load_strings(0, SDF_str_functs);
        ERR_load_strings(0, SDF_str_reasons);
    }
#endif
    return 1;
}
