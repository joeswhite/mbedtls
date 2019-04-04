/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: /mnt/e/everest/verify/kremlin/krml -fc89 -fparentheses -fno-shadow -fbuiltin-uint128 -I /mnt/e/everest/verify/hacl-star/code/lib/kremlin -I /mnt/e/everest/verify/kremlin/kremlib/compat -I /mnt/e/everest/verify/hacl-star/specs -I /mnt/e/everest/verify/hacl-star/specs/old -I . -ccopt -march=native -verbose -ldopt -flto -tmpdir x25519-c -I ../bignum -bundle Hacl.Curve25519=* -minimal -add-include "kremlib.h" -skip-compilation x25519-c/out.krml -o x25519-c/Hacl_Curve25519.c
 * F* version: 059db0c8
 * KreMLin version: 916c37ac
 */


#ifndef __Hacl_Curve25519_H
#define __Hacl_Curve25519_H


#include "kremlib.h"

void Hacl_Curve25519_crypto_scalarmult(uint8_t *mypublic, uint8_t *secret, uint8_t *basepoint);

#define __Hacl_Curve25519_H_DEFINED
#endif
