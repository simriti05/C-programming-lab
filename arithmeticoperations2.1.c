#include <stdio.h>
int main () {
    int a,b;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    int c=a+b;
    int d=c-a;
    int e=d*c;
    int f=e%d;
    printf("\naddition of two numbers: %d",c);
    printf("\ndifference of two numbers: %d",d);
    printf("\nmultiplications of two numbers: %d",e);
    printf("\nremainder of two numbers: %d",f);
    return 0;
}