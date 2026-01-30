#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "../../../lib/hdr/parr.h"

size_t	parr_get_len(void *parr)
{
	return (((parr_t *)parr)->len);
}

size_t	parr_get_size(void *parr)
{
	return (((parr_t *)parr)->obj_size);
}

bool	parr_alloc_arr(void *parr, size_t len, size_t size)
{
	void	*arr = malloc(len * size);
	if (arr == NULL)
		return (1);
	((parr_t *)parr)->len = len;
	((parr_t *)parr)->obj_size = size;
	((parr_t *)parr)->arr = arr;
	return (0);
}

void	parr_copy_arr(void *parr, void *src, size_t i_start, size_t len, size_t size)
{
	memcpy((uint8_t *)((parr_t *)parr)->arr + i_start * size, ((parr_t *)src)->arr, len * size);
}
