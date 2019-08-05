#include "cards.h"

bool mx_full_house(card *resultCards, const card *cards) {
	int collec;
	int a = 0;
	int b = 0;

    mx_sort_cards_by_rank(resultCards, cards);

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 5 - 1; j++) {
			if (resultCards[i].rank == resultCards[j].rank) 
				a++;
		}
	}
    for (int i = 5 - 1; i > 5 - 2; i--) {
    	for (int j = 5 -1; j >= 0; j--) {
        	if (resultCards[i].rank == resultCards[j].rank)
            	b++;
		}
    }
	collec = a + b;
	if (collec == 5)
		 return true;
	return false;
}

