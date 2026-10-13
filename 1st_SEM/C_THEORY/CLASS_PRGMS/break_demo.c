#include <stdio.h>
int main(){
    for(int j=0;j<5;j++){
        printf("Loop Started");
        for(int i=0;i<5;i++){
            printf("Inner loop started");
            if(j=2){
                break;
                printf("From Inner loop");
            }
            printf("From outer loop");
            break;
        }
        printf("program terminated.....");
    }
}