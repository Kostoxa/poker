#include "cards.h"

void mx_set_card(card *ca, int rank, char c) {
	ca->rank = rank;

	if (c == 'H')
		ca->suit = c;
	else if (c == 'C')
		ca->suit = c;
	else if (c == 'S')
		ca->suit = c;
	else if (c == 'D')
		ca->suit = c;
	else
		mx_error_char(INV_CARD_SUIT, c);
}

void mx_string_to_card(char **argv, card *cards) {
	for (int i = 1; i < 6; i++) {
		if (argv[i][1] == '0')
			mx_set_card(&cards[i - 1], 10, argv[i][2]);
		else if (mx_isdigit(argv[i][0]))
			mx_set_card(&cards[i - 1], argv[i][0] - 48, argv[i][1]);
		else if (argv[i][0] == 'J')
			mx_set_card(&cards[i - 1], 11, argv[i][1]);
		else if (argv[i][0] == 'Q')
			mx_set_card(&cards[i - 1], 12, argv[i][1]);
		else if (argv[i][0] == 'K')
			mx_set_card(&cards[i - 1], 13, argv[i][1]);
		else if (argv[i][0] == 'A')
			mx_set_card(&cards[i - 1], 14, argv[i][1]);
		else
			mx_error_char(INV_CARD_RANK, argv[i][0]);
	}
}
