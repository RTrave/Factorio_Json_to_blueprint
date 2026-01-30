#include "../../lib/hdr/file.h"
#include "../../lib/hdr/parr.h"

void	get_arguments(parr_t *files, char **args)
{
	size_t	i = 0;
	while (i < files->len && args[i] != NULL)
	{
		((file_t *)files->arr)[i].name = args[i];
		i++;
	}
}
