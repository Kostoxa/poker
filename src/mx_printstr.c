#include "cards.h"

void mx_printstr(const char *c) {
	write(1, c, mx_strlen(c));
}

