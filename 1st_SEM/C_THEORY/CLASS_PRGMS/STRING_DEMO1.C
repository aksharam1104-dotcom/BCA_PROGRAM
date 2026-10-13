#include<stdio.h>
int main(){
   // char name[8];
   // printf("ENTER YOUR FIRST NAME:");
   // scanf("%7s",name);
    
    char n1[100];
    printf("Enter the name:");
    fgets(n1,sizeof(n1),stdin);
    printf("%s",n1);
    for (int i=0; n1[i]!='\0';i++){
        printf("n1[%d]=%c-",i,n1[i]);
    }
    return 0;
}