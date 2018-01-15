#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "card.h"
#include "drawCards.h"

void drawCards(int* array){
        int i=0, randomint=0;
        for(i=0; i<10; i++){
                randomint = array[i];
                dealtDeck[i] = deck[randomint];
        }
}
