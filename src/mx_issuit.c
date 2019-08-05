#include "cards.h"

bool mx_issuit(card *resultCards, const card *cards) {
	mx_sort_cards_by_rank(resultCards, cards);

	if (resultCards[0].suit == resultCards[1].suit
	&& resultCards[1].suit == resultCards[2].suit
	&& resultCards[2].suit == resultCards[3].suit
	&& resultCards[3].suit == resultCards[4].suit)
		return true;
	return false;
}

