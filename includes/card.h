#ifndef CARD_INCLUDED
#define CARD_INCLUDED

typedef enum face {
        Two = 0,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        Ten,
        Jack,
        Queen,
        King,
        Ace
}Face;

typedef enum suit {
        Clubs = 0,
        Diamonds,
        Hearts,
        Spades
}Suit;

typedef struct card {
        Face card_face;
        Suit card_suit;
}Card;

Card deck[51];
Card dealtDeck[9];

#endif // CARD_INCLUDED
