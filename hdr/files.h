#pragma once

/* ----- MACROS ----- */

// File names
#define DEFAULT_OUTFILE	"string.txt"

// Default files
#define DEFAULT_FILES	\
{\
	.len = 2, \
	.obj_size = sizeof(t_file), \
	.arr = (t_file [])\
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

typedef struct	file	t_file;

/* ----- PROTOTYPES ----- */

// files/
//	check.c
bool	check_files(t_parr *files);
//	read.c
char	*read_file(t_file *file);
//	write.c
bool	write_file(t_file *file, char *string);
