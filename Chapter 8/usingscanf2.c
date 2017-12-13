// This is a program that asks users for some basic data types
// Page = 70

#include <stdio.h>

int main()
{
    char topping[24];
    int slices;
    int day, month, year;
    float cost;

    printf("How much does a pizza cost in your area");
    printf(" enter as $XX.XX\n");
    scanf(" $%f", &cost);

    printf("What is your favorite one-word pizza topping?\n");
    scanf(" %s", topping); // no need of & symbol while taking a string

    printf("How many slices of %s pizza", topping);
    printf(" can you eat in one sitting?\n");
    scanf(" %d", &slices);

    printf("What is today's date(Enter it in XX/XX/XX format only).\n");
    scanf(" %d/%d/%d", &day, &month, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", day, month, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you $%.2f!\n\n\n", cost);

    return 0;
}
