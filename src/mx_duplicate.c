#include "cards.h"

void mx_duplicate(char **argv, card *resultCards, const card *cards) {
	mx_cardscpy(resultCards, cards);

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (resultCards[x].rank == resultCards[y].rank
			&& resultCards[x].suit == resultCards[y].suit
			&& y != x)
				mx_error_str(DUP_CARDS, argv[y + 1]);
		}
	}
}

