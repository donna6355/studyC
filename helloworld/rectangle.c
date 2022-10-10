#include <stdio.h>

int main()
{
    double width = 10.20432;
    double height = 15.03123;
    double perimeter = (width+height)*2;
    double area = width * height;

    printf("height: %.2f, width: %.3f, perimete: %f\n",height, width, perimeter);
    printf("area is %f\n", area);

    return 0;
}
