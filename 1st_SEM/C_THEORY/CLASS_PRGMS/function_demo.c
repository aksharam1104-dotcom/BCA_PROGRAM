#include<stdio.h>
void addition(int first,int second){      //function definition
    int sum;
  //  int first=100;
   // int second=200;
    sum= first+ second;
    printf("the sum is %d",sum);
}

int main(){
    addition(100,200); 
    addition(10,20);
    printf("prgm terminated\n");
}


