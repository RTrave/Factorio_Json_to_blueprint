#include <stdint.h>
#include <stdlib.h>
#include "../lib/hdr/file.h"
#include "../lib/hdr/parr.h"
#include "../hdr/files.h"
#include "../hdr/arguments.h"
#include "../include/libblueprint.h"
// #include "../hdr/error.h"

int32_t	main(int32_t argc, char **argv)
{
	(void)argc;
	parr_t	files = DEFAULT_FILES;
	if (check_arguments(&argv[1]) == 1)
		return (1);
	get_arguments(&files, &argv[1]);
	if (check_files(&files) == 1)
		return (1);
	char	*file = read_file(&((file_t *)files.arr)[INPUT]);
	if (file == NULL)
		return (1);
	char	*string = blueprint_json_to_string(file);
	free(file);
	if (string == NULL)
		return (1);
	bool	error = write_file(&((file_t *)files.arr)[OUTPUT], string);
	free(string);
	return (error);
}
