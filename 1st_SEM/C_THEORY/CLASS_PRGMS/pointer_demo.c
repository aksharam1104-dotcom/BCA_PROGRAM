#include<stdio.h>
int main(){
    int x=10; //int variable x which stores 10
    int *p;  //int pointer
    p=&x;  //stores the x value

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
    return 0;
}