#include <stdio.h>
#include <stdlib.h>

#include "card.h"
#include "shuffle.h"

// Using the Fisher-Yates algorithm to shuffle an array of integers.
// This will insure that our deck is shuffled before dealing out
// the cards and sorting/comparing.

static int randomInt(int n){
        int limit = RAND_MAX - RAND_MAX % n;
        int rnd;

        do{
		rnd = rand();
        }
        while (rnd >= limit);
        return rnd % n;

}

void shuffle(int *array, int n) {
    int i, j, tmp;

    for (i = n - 1; i > 0; i--) {
        j = randomInt(i + 1);
        tmp = array[j];
        array[j] = array[i];
        array[i] = tmp;
   }
}
