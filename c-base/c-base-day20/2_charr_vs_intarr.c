#include <ctype.h>
#include <stdio.h>
#include <string.h>

#if 0
void PrintAlphabet(char* alphabet) {

}
#endif

int main()
{
    char ch_alphabet[1 + 26 + 1] = {1};//only init idx 0 element
    memset(ch_alphabet, 1, sizeof(ch_alphabet));
    int alphabet[1 + 26 + 1] = {1};
    memset(alphabet, 1, sizeof(alphabet));

    for(int i = 0; i < 5; i++) {
        //1
        printf("ch_alphabet[i] = %d\n", ch_alphabet[i]);
        //
        printf("ch_alphabet[i] = %c\n", ch_alphabet[i]);
    } 
    for(int i = 0; i < 5; i++) {
        //1
        //actually val 16843009, why?
        printf("alphabet[i] = %d\n", alphabet[i]);
        //
        printf("alphabet[i] = %c\n", alphabet[i]);
    } 
    return 0;
}

