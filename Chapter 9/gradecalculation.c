/* calculates the average of four grades and
   also does some other basic math*/
// page = 80

#include <stdio.h>

main()
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;
    // When a student gets same marks in more than 1 test
    grade1 = grade3 = 88;
    grade2 = 79;

    //The user need to enter the fourth test grade

    printf("What did you get on the fourth test");
    printf("(Integer between 0 and 100):");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;
    printf("Your average is %.1f.\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);

    printf("Your grade is %.1f points lower than the ", gradeDelta);
    printf("top grade in the class (which is 95)\n");
    printf("You are %.1f percent behind that grade\n\n\n", percentDiff);

    return 0;
}
