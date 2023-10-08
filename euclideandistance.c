#include <stdio.h>
#include <math.h>
int main () {
    float x1,y1,x2,y2;
    printf("let's find the euclidean distance between two points");
    printf("\nenter the first co ordinates");
    scanf("%f %f", &x1, &y1);
    printf("\nenter the second co ordinates");
    scanf("%f %f", &x2, &y2);
    double distance= sqrt(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    printf("distance between the two points is: %f", distance);
    return 0;
}