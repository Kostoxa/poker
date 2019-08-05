#include "cards.h"

void mx_sort_cards_by_rank(card *resultCards, const card *cards) {
	card mem;

	mx_cardscpy(resultCards, cards);
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 4; x++) {
			if (resultCards[x].rank > resultCards[x + 1].rank) {
				mem = resultCards[x];
				resultCards[x] = resultCards[x + 1];
				resultCards[x + 1] = mem;
				x = 0;
			}
		}
	}
}

