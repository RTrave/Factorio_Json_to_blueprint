#pragma once

/* ----- MACROS ----- */

// File names
#define DEFAULT_OUTFILE	"string.txt"

// Default files
#define DEFAULT_FILES	\
{\
	.len = 2, \
	.obj_size = sizeof(file_t), \
	.arr = (file_t [])\
	{\
		{\
			.info = SET_REQUIREMENT(MANDATORY) | SET_PERMISSION(READ)\
		}, \
		{\
			.name = DEFAULT_OUTFILE, \
			.info = SET_REQUIREMENT(OPTIONAL) | SET_PERMISSION(WRITE)\
		}\
	}\
}

/* ----- ENUMERATIONS ----- */

// Files
enum
{
	INPUT,
	OUTPUT
};

/* ----- TYPES DECLATATIONS ----- */

typedef struct	file	file_t;

/* ----- PROTOTYPES ----- */

// files/
//	check.c
bool	check_files(parr_t *files);
//	read.c
char	*read_file(file_t *file);
//	write.c
bool	write_file(file_t *file, char *string);
