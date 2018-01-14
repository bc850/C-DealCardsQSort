#include <stdio.h>
#include <stdlib.h>

#include "card.h"
#include "createDeck.h"

void createDeck(){
        int i=0;
        for(i=Two; i<=Ace; i++){
                deck[i].card_face = i;
                deck[i+13].card_face = i;
                deck[i+26].card_face = i;
                deck[i+39].card_face = i;
        }

        for(i=Two; i<=Ace; i++){
                deck[i].card_suit = Clubs;
                deck[i+13].card_suit = Diamonds;
                deck[i+26].card_suit = Hearts;
                deck[i+39].card_suit = Spades;
        }
}
