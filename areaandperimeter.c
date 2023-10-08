#include <stdio.h>
int main () {
    float r;
    float s;
    float l,b;
//circle
printf("lets find the area and perimeter of a circle: \n");
printf ("radius of circle: \n");
scanf("%f", &r);
printf("area of the circle is: %f \n", 3.14*r*r);
printf("perimeter of the circle is: %f \n", 2*3.14*r);
//square
printf("lets find the area and perimeter of square: \n");
printf("side of the square: \n");
scanf("%f",&s);
printf("area of the square is : %f \n", s*s);
printf("perimeter of the square is : %f \n", 4*s);
//rectangle
 printf("lets find the area and perimeter of rectangle: \n");
 printf("length of the rectangle: \n");
 scanf("%f",&l);
 printf("breadth of the rectangle: \n");
 scanf("%f",&b);
 printf("area of the rectangle is : %f \n", l*b);
printf("perimeter of the rectangle is : %f \n", 4*(l+b));
return 0;
}