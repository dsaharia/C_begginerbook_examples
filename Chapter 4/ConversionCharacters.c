// Conversion Characters
// Page = 38

#include <stdio.h>

main()
{
    /* Escape sequences and conversion characters */
    printf("Quantity\t cost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too much spaces     \b\b\b\b can be fixed with the ");
    printf("\\%c Escape Character\n", 'b');
    printf("\n\aSkip a few lines and beep ");
    printf("a few beeps \a\a\a\a");
    printf("%s %c.", "You are kicking butt learning", 'C');
    printf("You just finished chapter %d.\nYou have finished ", 4);
    printf("%.1f%c of the book.\n", 12.5000, '%');
    printf("\n \nOne third equals %.2f or ", 0.33333333);
    printf("%.3f or %.4f or ", 0.333333, 0.33333);
    printf("%.5f or %.6f\n\n\n", 0.333333333, 0.333333333);

    return 0;

}
