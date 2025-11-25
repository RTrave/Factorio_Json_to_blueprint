#include <stdlib.h>
#include "../../../lib/hdr/parr.h"

void	parr_free(void *parr)
{
	free(((t_parr *)parr)->arr);
	free(parr);
}
