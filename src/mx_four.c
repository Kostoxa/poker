#include "cards.h"

bool mx_four(card *resultCards, const card *cards) {
    int collec = 0;

    mx_sort_cards_by_rank(resultCards, cards);

    for (int i = 1; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (resultCards[i].rank == resultCards[j].rank)
                collec++;
        }
    }

    if (collec == 4)
         return true;
	return false;
}

