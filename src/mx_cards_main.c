#include "cards.h"

int main(int argc, char *argv[]) {
	card cards[5];
	card resultCards[5];

	if (argc != 6)
		mx_error_str(MANUAL, "");

	//mx_duplicate(argv, resultCards, cards);
	mx_string_to_card(argv, cards);
	mx_card_combination(resultCards, cards);

	return 0;
}

