#include <stdio.h>
void main()
{
    int n;
    printf("enter year: ");
    scanf("%d", &n);
    if(n%400==0){
        printf("it is a leap year");
    }
    else if(n%4==0 && n%100!=0){
        printf("it is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
}
