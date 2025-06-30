/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* poker.c (Chapter 10, page 233) */
/* Classifies a poker hand */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int hand[5][2]; //1 cow restore rank, 2 cow restore suit 
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

void test1()
{
    //two pairs
    hand[0][0] = 2;
    hand[0][1] = 'c';

    hand[1][0] = 2;
    hand[1][1] = 'd';

    hand[2][0] = 3;
    hand[2][1] = 'd';

    hand[3][0] = 3;
    hand[3][1] = 'c';

    hand[4][0] = 4;
    hand[4][1] = 'c';
    analyze_hand();
    print_result();
}

void test2()
{
    //three
    hand[0][0] = 2;
    hand[0][0] = 2;
    hand[0][1] = 'c';

    hand[1][0] = 2;
    hand[1][1] = 'd';

    hand[2][0] = 2;
    hand[2][1] = 's';

    hand[3][0] = 3;
    hand[3][1] = 'c';

    hand[4][0] = 4;
    hand[4][1] = 'c';
    analyze_hand();
    print_result();
}

void test3()
{
    //full house
    hand[0][0] = 2;
    hand[0][1] = 'c';

    hand[1][0] = 2;
    hand[1][1] = 'd';

    hand[2][0] = 2;
    hand[2][1] = 's';

    hand[3][0] = 3;
    hand[3][1] = 'c';

    hand[4][0] = 3;
    hand[4][1] = 'd';
    analyze_hand();
    print_result();
}

void test4()
{
    //four
    hand[0][0] = 2;
    hand[0][1] = 'c';

    hand[1][0] = 2;
    hand[1][1] = 'd';

    hand[2][0] = 2;
    hand[2][1] = 's';

    hand[3][0] = 2;
    hand[3][1] = 'h';

    hand[4][0] = 3;
    hand[4][1] = 'd';
    analyze_hand();
    print_result();
}

void test5()
{
    //small a straight
    hand[0][0] = 2;
    hand[0][1] = 'c';

    hand[1][0] = 3;
    hand[1][1] = 'd';

    hand[2][0] = 4;
    hand[2][1] = 's';

    hand[3][0] = 5;
    hand[3][1] = 'h';

    hand[4][0] = 12;
    hand[4][1] = 'd';
    analyze_hand();
    print_result();
}
/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
    test1();
    test2();
    test3();
    test4();
    test5();
    /* for (;;) { */
    /*     read_cards(); */
    /*     analyze_hand(); */
    /*     print_result(); */
    /* } */
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card, same_card;
    int cards_read = 0;

    for(int i = 0; i < NUM_CARDS; i++) {
        hand[i][0] = -1;
        hand[i][1] = -1;
        /* printf("hand[%d][0] = %d, hand[%d][1] = %d\n",i, hand[i][0], i, hand[i][1]); */
    }

    while (cards_read < NUM_CARDS) {
        bad_card = false;
        same_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
        case '0':           exit(EXIT_SUCCESS);
        case '2':           rank = 0; break;
        case '3':           rank = 1; break;
        case '4':           rank = 2; break;
        case '5':           rank = 3; break;
        case '6':           rank = 4; break;
        case '7':           rank = 5; break;
        case '8':           rank = 6; break;
        case '9':           rank = 7; break;
        case 't': case 'T': rank = 8; break;
        case 'j': case 'J': rank = 9; break;
        case 'q': case 'Q': rank = 10; break;
        case 'k': case 'K': rank = 11; break;
        case 'a': case 'A': rank = 12; break;
        default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
        case 'c': case 'C': suit = 0; break;
        case 'd': case 'D': suit = 1; break;
        case 'h': case 'H': suit = 2; break;
        case 's': case 'S': suit = 3; break;
        default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;

        int temp = cards_read;
        while(temp--) {
            if(rank == hand[temp][0] && suit == hand[temp][1]) {
                printf("rank = %d, suit = %d\n", rank, suit);
                printf("hand[temp][0] = %d, hand[temp][1] = %d\n", hand[temp][0], hand[temp][1]);
                same_card = true;
                break;
            } 
        }

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if(same_card) 
            printf("Same card; ignored.\n");
        else {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;

            cards_read++;
        }
    }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
    int suit_temp = -1;
    int num_in_rank[NUM_RANKS] = {0};

    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;


    /* check for flush */
    for(int i = 0; i < NUM_CARDS; i++) {
        if(suit_temp == -1) {
            suit_temp = hand[i][1];
        } else if(suit_temp == hand[i][1]) {
            continue;
        } else {
            flush = false;
            break;
        }
    }

    /* check for straight */
    for(int i = 0; i < NUM_CARDS; i++) {
        num_in_rank[hand[i][0]]++;
    }
    for(int i = 0; i < NUM_RANKS; i++) {
        if(num_in_rank[i] > 1) {
            straight = false;
            break;
        } else if(num_in_rank[i] == 1) {
            int idx = i + 4;
            while(idx > i) {
                if(num_in_rank[idx] == 1) {
                    idx--;
                    continue;
                } else {
                    straight = false;
                    break;
                }
            }

            //small_a_straight case: straight must false
            if(!straight) {
                if(num_in_rank[2] == 1 && \
                   num_in_rank[3] == 1 && \
                   num_in_rank[4] == 1 && \
                   num_in_rank[5] == 1 && \
                   num_in_rank[12] == 1   
                  ) {
                    straight = true;
                } else {
                    break;
                }
            }
        } 
    }


    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for(int i = 0; i < NUM_RANKS; i++) {
        if(num_in_rank[i] == 4) four = true;
        if(num_in_rank[i] == 3) three = true;
        if(num_in_rank[i] == 2) ++pairs;
    }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
    if (straight && flush) printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (three)        printf("Three of a kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}
