#include "cards.h"

bool mx_straight(card *resultCards, const card *cards) {
    mx_sort_cards_by_rank(resultCards, cards);
    if ((resultCards[0].rank == resultCards[1].rank - 1
	|| resultCards[0].rank == 14)
	&& resultCards[1].rank == resultCards[2].rank - 1
	&& resultCards[2].rank == resultCards[3].rank - 1
	&& (resultCards[3].rank == resultCards[4].rank - 1
	||  resultCards[4].rank == 14))
			return true;
	 return false;
}

