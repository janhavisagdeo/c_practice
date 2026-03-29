TAXI FARE CALCULATION PROGRAM

#include <stdio.h>

int main(int argc, const char * argv[]) {

    double fperkm = 1.50;
    double beginning, ending;
    double distance;
    double totalfare;

    printf("Please enter the beginning odometer reading: ");
    scanf("%lf", &beginning);

    printf("Please enter the ending odometer reading: ");
    scanf("%lf", &ending);

    distance = ending - beginning;
    totalfare = distance * fperkm;

    printf("You have travelled a distance of %.1f kilometers. At a %.1f per km, your total fare is %.2f.",
           distance, fperkm, totalfare);

    return 0;
}
