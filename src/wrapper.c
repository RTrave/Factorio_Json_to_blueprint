#include <string.h>
#include "../lib/hdr/parr.h"
#include "../hdr/compress.h"
#include "../hdr/base64.h"
#include "../include/libblueprint.h"

char	*blueprint_json_to_string(const char *json)
{
	parr_t	compressed, uncompressed = (parr_t){.len = strlen(json), .obj_size = sizeof(*json),
		.arr = (void *)json};
	if (blueprint_compress(&compressed, &uncompressed) == 1)
		return (NULL);
	char	*blueprint_string = blueprint_base64(&compressed);
	parr_clear(&compressed, NULL);
	return (blueprint_string);
}
