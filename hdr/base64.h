#pragma once

/* ----- MACROS ----- */

// Base64
#define BASE64_MARGIN_ENCODE	5

/* ----- TYPES DECLARATIONS ----- */

typedef struct	parr	parr_t;

/* ----- PROTOTYPES ----- */

// base64/
//	base64.c
char	*blueprint_base64(parr_t *src);
