//to demo scanf()
#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("--------------------------------------welcome to addition program------------------------------\n");

    printf("enter the first number\n");
    scanf("%d",&num1);

    printf("enter second number\n");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("the sum of %d and %d is %d\n",num1,num2,sum);
    printf("-----------------------------------------------------------------------------------------------\n");

    return 0;

}