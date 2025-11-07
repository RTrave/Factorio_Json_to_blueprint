#include "file.h"
#include "parr.h"

void	get_arguments(t_parr *files, char **args)
{
	size_t	i = 0;
	while (i < files->len && args[i] != NULL)
	{
		((t_file *)files->arr)[i].name = args[i];
		i++;
	}
}
