#include <stdio.h>
int main() {
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("the given number is even\n");
    }
    else
    {
        printf("the given number is odd");

    }
    return 0;
}