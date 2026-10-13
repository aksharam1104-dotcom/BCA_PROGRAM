#include<stdio.h>
// get_array_sum() using recursion
int get_array_sum(int number[], int i)
{
    if (i == 5)
    {
        return 0;
    }

    return number[i] + get_array_sum(number, i + 1);
}

int main()
{
    int mynumber[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &mynumber[i]);
    }
    int total = get_array_sum(mynumber, 0);
    printf("THE SUM IS %d", total);
    return 0;
}
