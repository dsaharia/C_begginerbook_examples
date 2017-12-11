// This program pairs three kids with their favorite superhero
// Page = 55

#include <stdio.h>
#include <string.h>

main()
{
    char Kid1 [12]; // Kid1 can hold 11 character
    char Kid2 [] = "Maddie"; // can hold 7 character but specific
    char Kid3 [7] = "Andrew";

    char Hero1 = "Batman";
    char Hero2 [35] = "Spiderman"; // Extra room just in case
    char Hero3 [25];

    Kid1[0] = 'K'; //Kid1 will be defined character-by-character
    Kid1[1] = 'a';
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0'; // Never forget the null zero

    strcpy(Hero3, "The Incredible Hulk");

    printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
    printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
    printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);

    return 0;

}
