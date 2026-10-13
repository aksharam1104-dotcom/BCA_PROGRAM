#include<stdio.h>
int main(){  
    int choice,num1,num2;
    do{
    printf("---------------------------------welcome to my calculator--------------------------------\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5. EXIT\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice==1){
        //addition
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    int sum = num1+num2;
    printf("the sum is : %d\n",sum);
    }
    if(choice==2){
        //subtraction
        printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    int difference = num1- num2;
    printf("the difference is : %d",difference);
    }
    if(choice==3){
        //multiplication
        printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    int product = num1*num2;
    printf("the multiplication is : %d",product);
    }
    if(choice==4){
        //division
        printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    int division = num1/num2;
    printf("the division is : %d",division);
    }
    if(choice==5){
        printf("..........EXIT..........\n");
    }}
        while(choice!=5);
        printf("------------------end-----------------\n");
    return 0;
}