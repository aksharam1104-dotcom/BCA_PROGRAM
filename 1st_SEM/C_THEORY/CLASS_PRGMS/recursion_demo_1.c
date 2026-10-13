//get the sum of array element with arraysize N using recursion function
#include<stdio.h>
int factorial(int number){
    if (number==0)
    return 1;
    return number*factorial(number-1);
}
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("The factorial number of %d is %d\n",number,factorial(number));
    return 0;
}