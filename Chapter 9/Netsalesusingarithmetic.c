/* This program asks the user for a number of tires and price per tire.
   It then calculates total price and additional sales tax*/
   // Page = 76
#include <stdio.h>
#define SALESTAX .07

main()
{
    // variables for the number of tires
    // price, before tax and total cost
    // with tax

    int numTires;
    float tirePrice, beforeTax, netSales;

    /* Get the number of tires purchased and price per tire */
    printf("How many tires did you purchase? :");
    scanf(" %d", &numTires);

    printf("What was the cost per tire (Enter as $XX.XX) ?");
    scanf(" $%f", &tirePrice);

    /* Compute the price */

    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * netSales);

    printf("You spent $%.2f on your tires \n\n\n", netSales);
    return 0;
}
