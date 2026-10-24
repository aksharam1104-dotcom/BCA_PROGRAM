//to demo scanf()
#include<stdio.h>
int main(){
    int num1,num2,sum,difference,multiplication,division;
    printf("---------------------------welcome to addition program------------------------------\n");
    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter second number\n");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("the sum of %d and %d is %d\n",num1,num2,sum);
    difference = num2 - num1;
    printf("the difference between %d and %d is %d\n",num1,num2,difference);
    multiplication = num1 * num2;
    printf("the multiplication between %d and %d is %d\n",num1,num2,multiplication);
    division = num2/num1;
    printf("the division between %d and %d is %d\n",num1,num2,division);
    printf("-------------------------------------------------------------------------------------\n");

    return 0;
}