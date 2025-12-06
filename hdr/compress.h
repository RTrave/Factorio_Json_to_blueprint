#pragma once

/* ----- INCLUDES ----- */

#include <stdbool.h>

/* ----- MACROS ----- */

// Zlib
#define COMPRESSION_LEVEL	9
#define CHUNK_SIZE		(1 << 18)

/* ----- TYPES DECLARATIONS ----- */

typedef struct	parr	parr_t;

/* ----- PROTOTYPES ----- */

// compress/
//	compress.c
bool	blueprint_compress(parr_t *dst, parr_t *src);
