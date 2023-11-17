#include <stdio.h>
int main() {
    int number,remainder,sum=0;
    printf("please enter any number\n");
    scanf("%d",&number);
    while(number>0)
    {
        remainder=number%10;
        sum=sum+remainder;
        number=number/10;
    }
    printf("sum of the digits of given number= %d", sum);
    return 0;
}