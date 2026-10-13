#include <stdio.h>

int main() {
    int choice, useraccount,accNo = 1000;
    float balance = 500, amount;
    do{
    printf("------------welcome to my bank--------------------\n");
    printf("1. deposit\n");
    printf("2. withdraw\n");
    printf("3. account view\n");
    printf("enter your option: ");
    scanf("%d", &choice);
    
        switch (choice) {
        case 1:
        printf("enter the accNo:");
        scanf("%d",&accNo);
        if(accNo ==1000 ){
            printf("valid account\n");
        }else{
            printf("invalid account\n");
        }
        printf("enter amount to deposit: ");
            scanf("%f", &amount);
            balance= balance+amount;
            printf("account updated....\n");
            printf("amount deposited successfully.. new balance: %f\n",balance);
        
            break;

        case 2:
        printf("enter the accNo:");
        scanf("%d",&useraccount);
        if(useraccount==accNo){
            printf("valid account number\n");
            printf("enter withdraw amount");
            scanf("%d",&amount);
            if (amount <= balance) {
                balance = balance - amount;
                printf("account updated. current amount: &d",balance);
            } else {
                printf("insufficient balance..");
            }
        }
            break;

        case 3:
        if(accNo !=1000){
            printf("invalid account\n");
        }else{
            printf("account number: %d\n", accNo);
            printf("current balance: %f\n", balance);
        }
            break;

        default:
            printf("invalid option\n");
    }}while (accNo!=1000);

    return 0;
}