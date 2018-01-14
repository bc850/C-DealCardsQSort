#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "createDeck.h"
#include "card.h"

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

}
