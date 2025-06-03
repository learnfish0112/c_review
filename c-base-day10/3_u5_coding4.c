#include <stdio.h>

#define LIGHT_AIR_MIN (1)
#define LIGHT_AIR_MAX (3)
#define BREEZE_MIN (4)
#define BREEZE_MAX (27)
#define GALE_MIN (28)
#define GALE_MAX (47)
#define STORM_MIN (48)
#define STORM_MAX (63)

void PrintBeaufortNumber(int wind_speed) {
    if(wind_speed < LIGHT_AIR_MIN) {
        printf("Calm\n");
    } else if(wind_speed >= LIGHT_AIR_MIN && wind_speed <= LIGHT_AIR_MAX) {
        printf("Light air\n");
    } else if(wind_speed >= BREEZE_MIN && wind_speed <= BREEZE_MAX) {
        printf("Breeze\n");
    } else if(wind_speed >= GALE_MIN && wind_speed <= GALE_MAX) {
        printf("Gale\n");
    } else if(wind_speed >= STORM_MIN && wind_speed <= STORM_MAX){
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }
}

int main()
{
    double wind_speed = -1;
    printf("Please enter wind speed: ");
    scanf("%lf", &wind_speed);
    PrintBeaufortNumber(wind_speed);

    return 0;
}

