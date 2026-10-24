#include<stdio.h>
int main(){
    int num1;
    float num2;
    double num3;
    double sum,difference,multiplication,division;
    printf("---------------------------welcome to addition program------------------------------\n");
    printf("enter the first number(int)\n");
    scanf("%d",&num1);
    printf("enter second number(float)\n");
    scanf("%f",&num2);
    printf("enter the third number(double)\n");
    scanf("%1f",&num3);
    sum = num1 + num3;
    printf("the sum of %d and %1f is %1f\n",num1,num3,sum);
    difference = num3 - num2;
    printf("the difference between %1f and %f is %1f\n",num3,num2,difference);
    multiplication = num1 * num2;
    printf("the multiplication between %d and %f is %1f\n",num1,num2,multiplication);
    division = num3/num1;
    printf("the division between %1f and %d is %1f\n",num3,num1,division);
    printf("-------------------------------------------------------------------------------------\n");

    return 0;
}
