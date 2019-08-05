#include "cards.h"

void mx_cardscpy(card *resultCards, const card *cards) {
	for (int i = 0; i < 5; i++) {
		resultCards[i].rank = cards[i].rank;
		resultCards[i].suit = cards[i].suit;
	}
}
