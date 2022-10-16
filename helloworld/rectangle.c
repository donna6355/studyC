#include <stdio.h>

int main()
{

    /*
    Format Specifier
    int : %d, %i,
    float : %f, 
    double : %e, %g,
    char : %c,
    bool : %i,

    */
    double width = 10.20432;
    double height = 15.03123;
    double perimeter = (width+height)*2;
    double area = width * height;

    printf("height: %.2f, width: %.3f, perimete: %f\n",height, width, perimeter);
    printf("area is %f\n", area);

    enum company{
        GOOGLE, FACEBOOK, XEROX, YAHOO =10 , EBAY, MICROSOFT,
    };
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("The value of xerox is %d\n",xerox);
    printf("The value of google is %d\n",google);
    printf("The value of ebay is %d\n",ebay); //assign specific int then the following value will be assigned. 11!
    return 0;
}
