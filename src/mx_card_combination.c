#include "cards.h"

void mx_card_combination(card *resultCards, const card *cards) {
	if (mx_straight(resultCards, cards) ) {
		if (resultCards[0].rank == 10 && mx_issuit(resultCards, cards)){
			mx_printstr("Royal flush\n");
		}
		else if (mx_issuit(resultCards, cards)) {
			mx_printstr("Straight flush\n");
		}
		else {
			mx_printstr("Straight\n");
		}
	} 
	else if (mx_four(resultCards, cards)) {
		mx_printstr("Four of a kind\n");
	}
	else if (mx_full_house(resultCards, cards)) {
		mx_printstr("Full house\n");
	}
	else if (mx_issuit(resultCards, cards)) {
		mx_printstr("Flush\n");
	}
	else if (mx_three(resultCards, cards)) {
		mx_printstr("Three of a kind\n");
	}
	else if (mx_two_pair(resultCards, cards)) {
		mx_printstr("Two pair\n");
	}
    else if (mx_one_pair(resultCards, cards)) {
        mx_printstr("One pair\n");
    }
	else mx_printstr("No pair\n");
}

