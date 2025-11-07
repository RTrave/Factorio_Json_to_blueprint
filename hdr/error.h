#pragma once

/* ----- INCLUDES ----- */

#include <stdio.h>

/* ----- MACROS ----- */

// Executable name
#define EXECUTABLE_NAME	"blueprint"

// Failing libraries
#define LIB_LIBC	"libc library"
#define LIB_ZLIB	"zlib library"

// Failing functions
//	libc
#define FUNC_MALLOC	"malloc function"
#define FUNC_FOPEN	"fopen function"
#define FUNC_FREAD	"fread function"
#define FUNC_FWRITE	"fwrite function"
#define FUNC_STAT	"stat function"
//	zlib
#define FUNC_ZLIB_DEFLATEINIT	"deflateInit function"
#define FUNC_ZLIB_DEFLATE	"deflate function"

// Error strings
//	zlib
#define ERROR_ZLIB_DEFLATEINIT	"failed to initialize the compression engine"
#define ERROR_ZLIB_DEFLATE	"failed to compress a block"
//	Argument
#define ERROR_ARGUMENT		"program arguments"
#define ERROR_ARGUMENT_TOO_FEW	"too few arguments provided (expected arguments : ./blueprint [infile] ([outfile]))"
#define ERROR_ARGUMENT_TOO_MANY	"too many arguments provided (expected arguments : ./blueprint [infile] ([outfile]))"
//	Allocation
#define ERROR_FAILED_ALLOC	"failed memory allocation"
// File
#define ERROR_FILE_NONEXISTANT	"file does not exist"
#define ERROR_FILE_NONREGULAR	"is not a regular file"
#define ERROR_READ_PERM		"file permissions prohibit reading"
#define ERROR_WRITE_PERM	"file permissions prohibit writing"
#define ERROR_OPEN_FILE		"failed to open file"
#define ERROR_READ_FILE		"failed to read from file"
#define ERROR_WRITE_FILE	"failed to write to file"
#define ERROR_FILE_STATUS	"failed to get file status"
