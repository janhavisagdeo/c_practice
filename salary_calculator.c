#include<stdio.h>
void main()
{
int n;
float hra, ta, tax;
printf("Enter base salary");
scanf("%d", &n);
hra = 0.1*n;
ta = 0.05*n;
tax = 0.02*n;
printf("gross salary = %.2f", hra + ta - tax);
}
