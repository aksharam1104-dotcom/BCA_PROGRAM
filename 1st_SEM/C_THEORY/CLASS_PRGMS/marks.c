#include <stdio.h>

int main()
{
    int i = 1;

    int maths1, maths2, maths3;
    int python1, python2, python3;
    int dbms1, dbms2, dbms3;

    int total1, total2, total3;
    float percentage1, percentage2, percentage3;

    do
    {
        printf("\nEnter %d student details:\n", i);

        if (i == 1)
        {
            printf("Maths marks: ");
            scanf("%d", &maths1);

            printf("Python marks: ");
            scanf("%d", &python1);

            printf("DBMS marks: ");
            scanf("%d", &dbms1);

            total1 = maths1 + python1 + dbms1;
            percentage1 = (total1 / 300.0) * 100;
        }
        else if (i == 2)
        {
            printf("Maths marks: ");
            scanf("%d", &maths2);

            printf("Python marks: ");
            scanf("%d", &python2);

            printf("DBMS marks: ");
            scanf("%d", &dbms2);

            total2 = maths2 + python2 + dbms2;
            percentage2 = (total2 / 300.0) * 100;
        }
        else
        {
            printf("Maths marks: ");
            scanf("%d", &maths3);

            printf("Python marks: ");
            scanf("%d", &python3);

            printf("DBMS marks: ");
            scanf("%d", &dbms3);

            total3 = maths3 + python3 + dbms3;
            percentage3 = (total3 / 300.0) * 100;
        }

        i++;

    } while (i <= 3);


    