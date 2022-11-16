#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // SET A
    float diameter, thickness;

    printf("Please mention the diameter (from 6 inch to 18 inch)\n");
    scanf("%f", &diameter);
    printf("Please mention the thickness (from 0.5 inch to 2 inch)\n");
    scanf("%f", &thickness);

    // calculation
    float radius = diameter/2;
    float volume = M_PI*(radius*radius)*thickness;

    printf("Volume = %f\n", volume);

    float price_per_diameter = 25;
    float price = volume*price_per_diameter;
    printf("Price = %f", price);

    return 0;
}
