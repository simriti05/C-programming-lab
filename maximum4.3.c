#include <stdio.h>
int main() {
    int i,n,max=1,num;
    printf("enter the total number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the %d number",i);
        scanf("%d",&num);
        max=(num>max) ? num:max;
    }
    printf("\nmaximum of given numbers is: %d",max);
    return 0;

}