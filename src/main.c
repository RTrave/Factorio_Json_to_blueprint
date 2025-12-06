#include <stdint.h>
#include <stdlib.h>
#include "file.h"
#include "parr.h"
#include "files.h"
#include "arguments.h"
#include "libblueprint.h"
#include "error.h"

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
