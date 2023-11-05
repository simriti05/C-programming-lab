#include <stdio.h>
int main() {
    int i,n,fact=1;
    printf("enter the number to find its factorial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*",i);
        fact*=i;
    }
    printf("\nfactorial of the given number is:%d",fact);
    return 0;
}