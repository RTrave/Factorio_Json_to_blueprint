#include <stdbool.h>
#include "error.h"

bool	check_arguments(char **args)
{
	size_t	i = 0;
	while (i < 2 && args[i] != NULL)
		i++;
	if (i < 1)
	{
		fprintf(stderr, "%s: %s: %s\n",
			EXECUTABLE_NAME, ERROR_ARGUMENT, ERROR_ARGUMENT_TOO_FEW);
		return (1);
	}
	if (args[i] != NULL)
	{
		fprintf(stderr, "%s: %s: %s: ",
			EXECUTABLE_NAME, ERROR_ARGUMENT, ERROR_ARGUMENT_TOO_MANY);
		while (args[i] != NULL)
		{
			fprintf(stderr, "\"%s\"", args[i]);
			if (args[i + 1] != NULL)
				fprintf(stderr, ", ");
			i++;
		}
		fprintf(stderr, "\n");
		return (1);
	}
	return (0);
}
