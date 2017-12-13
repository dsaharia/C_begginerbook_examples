// This is a sample program that demonstrates math operators
// and different types of divisions
// Page = 74

#include <stdio.h>

main()
{
    // Two sets of equivalent variables, with one set floating and other integer

    float a = 19.0, b = 5.0;
    float floatAnswer;

    int x = 19, y = 5;
    int intAnswer;

    // Using two float
    floatAnswer = a/b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

    floatAnswer = x/y;
    printf("%.d divided by %.d equals %.1f\n", x, y, floatAnswer);

    intAnswer = a/b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);

    intAnswer = x % y; // This calculates the remainder
    printf("%d modules %d equals %d", x, y, intAnswer);

    return 0;

}
