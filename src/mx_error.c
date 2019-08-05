#include "cards.h"

void mx_error_char(char *error, char c) {
    mx_printerr(error);
    mx_printchar(c);
    mx_printchar('\n');
    exit(1);
}

void mx_error_str(char *error, char *s) {
    mx_printerr(error);
	mx_printstr(s);
	mx_printchar('\n');
    exit(1);
}

