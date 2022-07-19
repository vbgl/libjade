#ifndef JADE_HASH_SHA256_AMD64_MMX_API_H
#define JADE_HASH_SHA256_AMD64_MMX_API_H

#define JADE_HASH_SHA256_AMD64_MMX_BYTES 32
#define JADE_HASH_SHA256_AMD64_MMX_ALGNAME "SHA256"

#include <stdint.h>

int jade_hash_sha256_amd64_mmx(
 uint8_t *out,
 uint8_t *in,
 uint64_t length
);

#endif