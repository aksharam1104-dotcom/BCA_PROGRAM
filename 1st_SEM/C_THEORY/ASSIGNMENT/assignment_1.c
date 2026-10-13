#include <stdio.h>

int main()
{
    int n, category;
    int regular=0, premium=0, recliner=0;
    float total, discount, finalAmount;

    printf("Enter number of tickets: ");
        scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter category for ticket %d (1/2/3): ", i);
        scanf("%d", &category);

        switch (category)
        {
            case 1:
                total = total+150; 
                regular= regular+1;
                break;

            case 2:
                total = total+250;
                premium= premium+1;
                break;

            case 3:
                total = total+400;
                recliner= recliner+1;
                break;

            default:
                printf("Invalid category!\n");
        }
    }

    if (n >= 5)
    {
        discount = total * 0.10;
        finalAmount = total - discount;
    }
    else
    {  
        finalAmount = total;
    }

    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n", regular);
    printf("Premium tickets: %d\n", premium);
    printf("Recliner tickets: %d\n", recliner);
    printf("Total (before discount): %.2f\n", total);

    if (n >= 5)
    {
        printf("Discount applied: 10%%\n");
    }
    else
    {
        printf("Discount applied: No\n");
    }

    printf("Final Amount: %.2f\n", finalAmount);

    return 0;
}