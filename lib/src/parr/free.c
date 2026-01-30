#include <stdlib.h>
#include "../../../lib/hdr/parr.h"

void	parr_free(void *parr)
{
	free(((parr_t *)parr)->arr);
	free(parr);
}
