#include<stdio.h>
int main(){
    int choice,num1,num2,num3;
    int SMALLEST,LARGEST;

    printf("1.smallest of 3 numbers\n");
    printf("2. largest of 3 numbers\n");
    printf("3. check a number for ODD/EVEN \n");
    printf("4. check for divisible by 5\n ");
    printf("5. swap 2 numbers\n");
    printf("enter your option: ");
    scanf("%d", &choice);

    switch (choice){
    case 1:
        printf("Enter first number:");
        scanf("%d",&num1);
    printf("Enter second number:");
        scanf("%d",&num2);
        printf("Enter third number:");
        scanf("%d",&num3);
    if(num1<num2){
        SMALLEST = num1;
    }else{
        SMALLEST = num2;
    }

    if(num3<SMALLEST)
    {
    SMALLEST =  num3; 
    }
    printf("smallest of 3 number %d",SMALLEST);
    break;
    case 2:
        printf("enter first number:");
        scanf("%d",&num1);
        printf("enter second number:");
        scanf("%d",&num2);
        printf("enter third number:");
        scanf("%d",&num3);
        if(num1>num2)
        {
            LARGEST = num1;
        }
        else{
            LARGEST = num2;
        }
        if(num3 < LARGEST)
        {
            LARGEST = LARGEST;
        }
        printf("largest of 3 numbers is:%d",LARGEST);
        break;
    case 3:
        printf("enter the number:");
        scanf("%d",&num1);
        if(num1 %2 == 0) {
            printf("%d is a even number",num1);
        }else{
            printf("%d is a odd number",num1);
        }
        break;
    case 4: 
        printf("enter the number:");
        scanf("%d",&num1);
        if(num1 %5 == 0) {
            printf("the number %d is divisible by 5",num1);
        }else{
            printf("the number %d is not divisible by 5",num1);
        }
        break;

    case 5:
    printf("enter num1 :");
    scanf("%d",&num1);
    printf("enter num2 :");
    scanf("%d",&num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("the two number after swapping: %d and %d\n",num1,num2);
    break;
default:
    printf("invalid choice\n");
    }
    return 0;
}