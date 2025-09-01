#include <stdio.h>
#include <string.h>

void find_largest_and_smallest();

int main()
{
    find_largest_and_smallest();
    return 0;
}

void find_largest_and_smallest() {
    char smallest_word[20 + 1] = {0};
    char largest_word[20 + 1] = {0};
    char cur_word[20 + 1] = {0};
    printf("Enter word:  ");

    while(scanf("%s", cur_word)) {
        if(strlen(cur_word) == 4) break;
        if(smallest_word[0] == 0 && largest_word[0] == 0) {
            strcpy(smallest_word, cur_word);
            strcpy(largest_word, cur_word);
        } 

        if(strcmp(cur_word, smallest_word) < 0) {
            strcpy(smallest_word, cur_word);
        }         
        if(strcmp(cur_word, largest_word) > 0) {
            strcpy(largest_word, cur_word);
        }         
        printf("Enter word:  ");
    }

    printf("\n");
    printf("smallest_word = %s\n", smallest_word); 
    printf("largest_word = %s\n", largest_word);
}
