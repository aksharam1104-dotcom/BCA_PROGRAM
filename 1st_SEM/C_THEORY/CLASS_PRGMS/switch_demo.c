#include<stdio.h>
int main(){
    int day=3;                     //1,2,3,4,5,6,7
    switch(day){
        case 1:
        printf("week day : monday");
        break;
        case 2:
        printf("week day : tuesday");
        break;
        case 3:
        printf("week day : wednesday");
        break;
        case 4:
        printf("week day : thursday");
        break;
        case 5:
        printf("week day : friday");
        break;
        case 6:
        printf("week day : saturday");
        break;
        case 7:
        printf("week day : sunday");
        break;
        default:
        printf("invalid option..");
    }
}