#include <Arduino.h>
#include <inttypes.h>

#define ROWS (10)
#define COLUMNS (11)

struct key_matrix {
	uint16_t key;
	unsigned int last_state:1;
	uint64_t count;
};
