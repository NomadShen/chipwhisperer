/* This AES-128 comes from https://github.com/kokke/tiny-AES128-C which is released into public domain */

#ifndef _AES_H_
#define _AES_H_

#include <stdint.h>

#ifndef AES_CONST_VAR
//#define AES_CONST_VAR static const
#define AES_CONST_VAR
#endif


void AES128_ECB_encrypt(uint8_t* input, uint8_t* key, uint8_t *output);
void AES128_ECB_decrypt(uint8_t* input, uint8_t* key, uint8_t *output);

void AES128_ECB_indp_setkey(uint8_t* key);
void AES128_ECB_indp_crypto(uint8_t* input);

void AES128_ECB_indp_setpt(uint8_t index, uint8_t* pt);
void AES128_ECB_indp_crypto_interleave();
void AES128_ECB_indp_obtainpt(uint8_t index, uint8_t* pt);

#endif //_AES_H_