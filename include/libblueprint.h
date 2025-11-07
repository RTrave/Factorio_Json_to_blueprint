#pragma once

/* ----- MACROS ----- */

#define LIB_EXPORT	__attribute__((visibility("default")))

/* ----- PROTOTYPES ----- */

// wrapper.c
LIB_EXPORT char	*blueprint_json_to_string(const char *json);
