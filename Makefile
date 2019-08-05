NAME = minilibmx.a

BIN = race03

SRCS = src/mx_card_combination.c \
	src/mx_cards_main.c \
	src/mx_cardscpy.c \
	src/mx_duplicate.c \
	src/mx_error.c \
	src/mx_four.c \
	src/mx_full_house.c \
	src/mx_issuit.c \
	src/mx_one_pair.c \
	src/mx_printchar.c \
	src/mx_printerr.c \
	src/mx_printint.c \
	src/mx_printstr.c \
	src/mx_sort_cards_by_rank.c \
	src/mx_straight.c \
	src/mx_string_to_card.c \
	src/mx_strlen.c \
	src/mx_three.c \
	src/mx_two_pair.c \
	src/mx_isdigit.c \

SRCS2 = mx_card_combination.c \
    mx_cards_main.c \
    mx_cardscpy.c \
    mx_duplicate.c \
    mx_error.c \
    mx_four.c \
    mx_full_house.c \
    mx_issuit.c \
    mx_one_pair.c \
    mx_printchar.c \
    mx_printerr.c \
    mx_printint.c \
    mx_printstr.c \
    mx_sort_cards_by_rank.c \
    mx_straight.c \
    mx_string_to_card.c \
    mx_strlen.c \
    mx_three.c \
    mx_two_pair.c \
	mx_isdigit.c \

OUT = mx_card_combination.o \
    mx_cards_main.o \
    mx_cardscpy.o \
    mx_duplicate.o \
    mx_error.o \
    mx_four.o \
    mx_full_house.o \
    mx_issuit.o \
    mx_one_pair.o \
    mx_printchar.o \
    mx_printerr.o \
    mx_printint.o \
    mx_printstr.o \
    mx_sort_cards_by_rank.o \
    mx_straight.o \
    mx_string_to_card.o \
    mx_strlen.o \
    mx_three.o \
    mx_two_pair.o \
	mx_isdigit.o \

INC = inc/cards.h

INC2 = cards.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
		@cp $(INC) .
		@cp $(SRCS) .
		@clang $(CFLAGS) -c $(SRCS2) -I $(INC2)
		@ar -rc $(NAME) $(OUT) $(INC2)
		@clang $(CFLAGS) -o $(BIN) $(NAME)

uninstall: clean
		@rm -rf $(NAME)
		@rm -rf $(BIN)

clean:
		@rm -rf $(SRCS2)
		@rm -rf $(OUT)
		@rm -rf $(INC2)

reinstall: uninstall install

