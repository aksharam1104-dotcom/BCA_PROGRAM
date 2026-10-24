//c program to demo nested if else
// program to issue DL 
#include<stdio.h>       //includes 'stdio.h' to this program
int main(){            //execution starts from here 
int age;
int is_indian;    //1-indian; 0-non-indian
int is_Test_Cleared;             //1-cleared;0-not cleared
int paid_fee;
printf("----------------WELCOME TO DL TEST--------------------------\n");
printf("ENTER YOUR AGE:\n");
scanf("%d",&age);
printf("enter nationality[1-INDIAN/0-NON-INDIAN]\n");
scanf("%d",&is_indian);
printf("whether test is cleared[1-cleared/0-not cleared] \n");
scanf("%d",& is_Test_Cleared);
printf("enter fee paid\n");
scanf("%d",&paid_fee);

printf("YOUR DATA........\n");
printf("AGE : %d\n",age);
printf("NATIONALITY : %d\n",is_indian);
printf("IS TEST CLEARED : %d\n",is_Test_Cleared);
printf("FEES PAID : %d \n",paid_fee);
//CORE LOGIC TO DETERMINE CERTIFICATE CAN BE ISSUED OR NOT
//NESTED IF STATEMENT
if(is_indian==1){
    if(age>=18){
        if(is_Test_Cleared==1){
            if(paid_fee>=500){
                printf("DL CAN BE ISSUED\n");
            }else{
                printf("DL can't be issued,reason-[fee not paid]\n");
            }
        }else{
            printf("DL can't be issued,reason-[test is not cleared]\n");
        }
    }else{
        printf("DL can't be issued , reason -[under age]\n");
    }
}else{
    printf("DL can't be issued , reason -[not indian]\n");
}
return 0;

}