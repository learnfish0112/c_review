#include <stdio.h>
#include <string.h>

void reverse_partition(char *p, int st_idx, int n);
void reverse(void);

int main()
{
    reverse();

    return 0;
}

//n is st_idx to '\0' or ' ' distance
void reverse_partition(char *p, int st_idx, int n) {
    for(int left = st_idx, right = st_idx + n - 1; left < right; left++, right--) {
        char temp = p[left];
        p[left] = p[right];
        p[right] = temp;
    }
}

void reverse(void) {
    char str[128] = {0};
    char *p = &str[0];

    printf("Reverse ");
    while((*p = getchar()) != '\n' && p <= &str[128]) {
        p++;
    } 
    *p = '\0';

    reverse_partition(str, 0, strlen(str));

    char* pre = str;
    p = str;
    while(p <= str + strlen(str)) {
        if(*p == ' ') {
            reverse_partition(str, pre - str, p - pre);
            pre = ++p;
        } else if(p == str + strlen(str)) {
            reverse_partition(str, pre - str, p - pre);
            p++;
        } else {
            p++;
        }
    }

    printf("%s\n", str);
}

