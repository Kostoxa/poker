#include "cards.h"

bool mx_two_pair(card *resultCards, const card *cards) {
    int collec = 0;
	int a = 0;
	int b = 0;

    mx_sort_cards_by_rank(resultCards, cards);

    for (int i = 1; i < 5 - 2; i++) {
        for (int j = 0; j < 5 - 2; j++) {
            if (resultCards[i].rank == resultCards[j].rank && i != j)
                a++;
        }
    }
    for (int i = 5 - 2; i > 5 - 4; i--) {
    	for (int j = 5 - 1; j >= 5 - 4; j--) {
        if (resultCards[i].rank == resultCards[j].rank && i != j)
            b++;
		}
    }
	collec = a + b;
    if (collec == 2)
         return true;
    return false;
}

