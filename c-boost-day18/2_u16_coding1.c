#include <stdio.h>

#define ARR_SIZE(a) (sizeof(a)/sizeof(a[0]))

struct dialing_code {
    char* country;
    int code;
};

const struct dialing_code country_node[] = {
    {"Argentina", 54},
    {"Brazil", 55},
    {"China", 86},
    {"Germany", 49},
    {"Italy", 39}
};

void find_country_by_code(struct dialing_code dc);

int main()
{
    struct dialing_code dc;
    printf("Please input you hope find code: ");
    scanf("%d", &dc.code);

    find_country_by_code(dc);
    return 0;
}

void find_country_by_code(struct dialing_code dc) {
    int country_node_size = ARR_SIZE(country_node);
    printf("country_node size: %d\n", country_node_size);
    for(int i = 0; i < country_node_size; i++) {
        if(dc.code == country_node[i].code) {
            printf("Your code corresponding country is: %s\n", country_node[i].country);
            return;
        }
    }
    printf("Your code is Unknown\n");
}
