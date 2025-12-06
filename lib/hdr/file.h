#pragma once

/* ----- INCLUDES ----- */

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

/* ----- MACROS ----- */

// Function macros
#define SET_REQUIREMENT(requirement)	((requirement & MASK_REQUIREMENT) << POS_REQUIREMENT)
#define SET_PERMISSION(permission)	((permission & MASK_PERMISSION) << POS_PERMISSION)
#define GET_REQUIREMENT(info)		((info >> POS_REQUIREMENT) & MASK_REQUIREMENT)
#define GET_PERMISSION(info, mask)	((info >> POS_PERMISSION) & MASK_PERMISSION & mask)

// Bit masks
#define MASK_REQUIREMENT	3
#define MASK_PERMISSION		7

// Bit positions
#define POS_REQUIREMENT	0
#define POS_PERMISSION	2

// Function fopen modes
#define FOPEN_MODE_READ		"r"
#define FOPEN_MODE_WRITE	"w"

/* ----- ENUMERATIONS ----- */

// Requirement
enum
{
	MANDATORY,
	OPTIONAL,
	UNUSED
};

// Permissions
enum
{
	READ =	(1 << 0),
	WRITE =	(1 << 1),
	EXEC =	(1 << 2)
};

/* ----- STRUCTURES ----- */

// File
typedef struct	file
{
	char	*name;
	FILE	*stream;
	uint8_t	info;
}	file_t;

/* ----- PROTOTYPES ----- */

// file/
//	open.c
bool	file_open(file_t *file, char *mode);
//	close.c
void	file_close(file_t *file);
