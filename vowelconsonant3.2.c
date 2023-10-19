#include <stdio.h>
int main () {
    char ch;
    int b;
    printf("enter a character");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("the given chracter is a vowel\n");
    }
    else
    {
        printf("the given character is a consonant");
    }
    return 0;
}