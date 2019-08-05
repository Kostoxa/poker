#ifndef CARDS_H
#define CARDS_H

#define MANUAL "usage: ./race03 [card1] [card2] [card3] [card4] [card5]"
#define INV_CARD "Invalid card: "
#define INV_CARD_RANK "Invalid card rank: "
#define INV_CARD_SUIT "Invalid card suit: "
#define DUP_CARDS "Duplicate cards: "

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct card {
    int rank;
    char suit;
} card ;

bool mx_isdigit(int n);
int mx_strlen(const char *c);

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *c);
void mx_printerr(const char *s);
void mx_error_char(char *error, char c);
void mx_error_str(char *error, char *s);
void mx_cardscpy(card *resultCards, const card *cards);
void mx_string_to_card(char **argv, card *cards);
void mx_sort_cards_by_rank(card *resultCards, const card *cards);
void mx_card_combination(card *resultCards, const card *arr);
void mx_duplicate(char **argv, card *resultCards, const card *cards);

bool mx_four(card *resultCards, const card *cards);
bool mx_full_house(card *resultCards, const card *cards);
bool mx_three(card *resultCards, const card *cards);
bool mx_one_pair(card *resultCards, const card *cards);
bool mx_two_pair(card *resultCards, const card *cards);
bool mx_straight(card *resultCards, const card *cards);
bool mx_isdigit(int c);
bool mx_issuit(card *resultCards, const card *cards);

#endif

