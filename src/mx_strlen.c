#include "cards.h"

int mx_strlen(const char *c) {
	int len = 0;
	
	for (int i = 0; c[i] != '\0'; i++)
		len++;
	
	return len;
}

