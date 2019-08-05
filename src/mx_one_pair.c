#include "cards.h"

bool mx_one_pair(card *resultCards, const card *cards) {
	mx_sort_cards_by_rank(resultCards, cards);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (resultCards[i].rank == resultCards[j].rank && i != j)
                return true;
        }
    }
    return false;
}
