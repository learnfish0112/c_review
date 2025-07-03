#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define WORD_SIZE (48)

int main()
{
    char ch;
    int res = 0;

    printf("Enter a word: ");
    while((ch = getchar()) != '\n') {
        if(ch >= 'a' && ch <= 'z') {
            ch = toupper(ch); 
        }        

        if(ch == 'A' || \
           ch == 'E' || \
           ch == 'I' || \
           ch == 'L' || \
           ch == 'N' || \
           ch == 'O' || \
           ch == 'R' || \
           ch == 'S' || \
           ch == 'T' || \
           ch == 'U' 
          ) {
            res += 1;
        }

        if(ch == 'D' || ch == 'G') {
            res += 2;
        }

        if(ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P') {
            res += 3;
        }

        if(ch == 'F' || \
           ch == 'H' || \
           ch == 'V' || \
           ch == 'W' || \
           ch == 'Y'  
          ) {
            res += 4;
        }

        if(ch == 'K') {
            res += 5;
        }

        if(ch == 'J' || ch == 'X') {
            res += 8;
        }

        if(ch == 'Q' || ch == 'Z') {
            res += 10;
        }
    } 
    printf("Scrabble value: %d\n", res);

    return 0;
}

