// Variable Knowledge
// Page = 46

#include <stdio.h>
// Sample Program that lists two kids and their school need as well as their costs

main()
{
    // Set up variables

    char firstInitial, middleInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils = 0.23;
    float notebooks = 0.29;
    float lunchbox = 4.99;

    // The Information for the first Child
    firstInitial = 'J';
    middleInitial = 'R';

    number_of_pencils = 7;
    number_of_notebooks = 4;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
    printf("The total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);

    // The Information of the second child
    firstInitial = 'A';
    middleInitial = 'J';

    number_of_pencils = 10;
    number_of_notebooks = 3;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
    printf("The total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);

    return 0;


}

