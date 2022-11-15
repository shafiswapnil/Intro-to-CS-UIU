#include <stdio.h>
#include <stdlib.h>

int main()
{
    // SET B
    float fare_per_km = 30;
    float fare_per_min = 0.75;

    float total_fare, v, t;

    printf("Enter speed (km)\n");
    scanf("%f", &v);
    printf("Enter time (Hours)\n");
    scanf("%f", &t);

    float distance = v*t;
    printf("Distance = %f\n", distance);

    float fare_distance = distance*fare_per_km;
    printf("Fare for distance = %f\n", fare_distance);

    // convert hour to minute
    float user_minute = t*60;

    float fare_time = user_minute*fare_per_min;
    printf("Fare for time = %f\n", fare_time);

    total_fare = fare_distance + fare_time;
    printf("Total fare = %f\n", total_fare);

    return 0;
}
