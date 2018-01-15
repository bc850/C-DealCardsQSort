#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "createDeck.h"
#include "card.h"
#include "drawCards.h"
#include "compare.h"
#include "shuffle.h"

int main()
{
        // GAME PLAN: 
        // First, make enums for the card values
        // Second, create a typedef'd Card structure that includes the enums
        // Third, create a Card structure array to build a deck of 52 cards
        // Fourth, create another Card structure array to store the dealt cards
        // Fifth, run a createDeck function to fill the deck with cards
        // Sixth, create an array of integers between 0-51 to use as indexes
        // Seventh, shuffle the array of integers to get random cards at the top of the deck
        // Eighth, draw the first ten cards off the top of the deck with drawCards function
        // Ninth, sorth the drawn cards with qsort algorithm and compare function
        // Tenth, print the results

        int i=0, j=0, randomint=0;
        int randnumarray[51];
        Card* deckptr;

        createDeck();

        srand(time(NULL));

        // create array of 52 numbers first before shuffling
        for(i=0; i<52; i++){
                randnumarray[i] = i;
        }
	
	// Run randnumarray through Fisher-Yates shuffling algorithm.
        // This will shuffle the array of ints so that the first ten
        // numbers in the array are random, non-repeating cards in
        // the deck that get dealt out.
        shuffle(randnumarray, 51);

        drawCards(randnumarray);

        // qsort() for dealtDeck
        qsort(dealtDeck, 10, sizeof(Card), compare);

        printf("\n\n---\nHere is a 10-card hand that was dealt randomly by the machine.\n\n");

        for(i=0; i<10; i++){
                if(dealtDeck[i].card_face == 0){
                        printf("\tcard:     2 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

		if(dealtDeck[i].card_face == 1){
                        printf("\tcard:     3 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 2){
                        printf("\tcard:     4 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 3){
                        printf("\tcard:     5 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

		if(dealtDeck[i].card_face == 4){
                        printf("\tcard:     6 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 5){
                        printf("\tcard:     7 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 6){
                        printf("\tcard:     8 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

		if(dealtDeck[i].card_face == 7){
                        printf("\tcard:     9 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 8){
                        printf("\tcard:    10 of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 9){
                        printf("\tcard:  Jack of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

		if(dealtDeck[i].card_face == 10){
                        printf("\tcard: Queen of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 11){
                        printf("\tcard:  King of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }

                if(dealtDeck[i].card_face == 12){
                        printf("\tcard:   Ace of ");
                        if(dealtDeck[i].card_suit == 0)
                                printf("Clubs.\n");
                        if(dealtDeck[i].card_suit == 1)
                                printf("Diamonds.\n");
                        if(dealtDeck[i].card_suit == 2)
                                printf("Hearts.\n");
                        if(dealtDeck[i].card_suit == 3)
                                printf("Spades.\n");
                }
        }

        printf("\n");

	return 0;
}
