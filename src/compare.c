#include <stdio.h>
#include <stdlib.h>

#include "card.h"
#include "compare.h"

int compare(const void *p, const void *q){
        const Card* card1 = p;
        const Card* card2 = q;
        int cardreturn;

        // descending order 
        cardreturn = card2->card_face - card1->card_face;
        if(0 == cardreturn){
                cardreturn = card1->card_suit - card2->card_suit;
        }

        return cardreturn;
}
