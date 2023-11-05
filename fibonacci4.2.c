#include <stdio.h>
int main() {
    int i,f=0,s=1,n;
    printf("enter some number: ");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        printf("%d ",f);
        int next=f+s;
        f=s;
        s=next;
    }
    return 0;
}