/*This is a sample program that lists three kids and their school supply
need as well as costs using a header file */

#include <stdio.h>
#include <string.h>
#include "Header.h"

main()
{
    int age;
    char childname[14] = "Thomas";
    printf("\n%s have %d kids.\n", FAMILY, KIDS);

    age = 11;
    printf("The oldest, %s, is %d.\n", childname, age);

    strcpy(childname, "Christopher");
    age = 6;
    printf("The youngest, %s, is %d.\n", childname, age);

    return 0;

}
