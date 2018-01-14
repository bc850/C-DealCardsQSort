# C-DealCardsQSort

When playing poker and other card games (standard 52 cards, excluding the jokers), it is usual to arrange a hand to reflect its values. This C program arranges and prints out a random hand of ten cards in sorted order by pips values. It is assumed that an ace is highest in value, a king is next highest, which is followed by a queen, a jack, and so forth. For cards of the same pips values, their suits are used to sort them in the order of Clubs, Diamonds, Hearts, and Spades. Notice that no card shows more than once in a hand. 

We use the following line to truely randomize the cards dealt out of the deck by the program: (#include <time.h> is included in the beginning of the program as well). 

	srand(time(NULL));

Attributes of the program:
  1. uses structures and enums to model poker cards
  2. uses a comparator function and qsort() to sort the cards
  3. consists of at least three source .c files and three header .h files
  4. uses a workable Makefile with bin, includes, src, and obj subfolders
