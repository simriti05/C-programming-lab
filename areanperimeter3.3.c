#include <stdio.h>
int main () {
    int choice;
    float radius,length,breadth,side,area,perimeter;
    printf("select any one choice from the following");
    printf("\n 1.circle");
    printf("\n 2.square");
    printf("\n 3.rectangle");
    printf("\n enter the choice: ");
    scanf("%d", &choice);
    if (choice==1)
    {
        printf("enter the radius of circle");
        scanf("%f", &radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
        printf("area of circle is: %f", area);
        printf("\nperimeter of circle is: %f", perimeter);
    }
    else if (choice==2)
    {
        printf("enter the side of square");
        scanf("%f", &side);
        area=side*side;
        perimeter=4*side;
        printf("area of square is: %f", area);
        printf("\nperimeter of square is: %f", perimeter);

    }
    else if(choice==3)
    {
        printf("enter the length of rectangle");
        scanf("%f", &length);
        printf("enter the breadth of rectangle");
        scanf("%f", &breadth);
        area=length*breadth;
        perimeter=2*(length+breadth);
        printf("area of rectangle is: %f", area);
        printf("\nperimeter of rectangle is: %f", perimeter);

    }
    else
    {
        printf("invalid number");
    }
    return 0;
}