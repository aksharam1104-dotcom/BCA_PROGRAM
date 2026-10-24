#include<stdio.h>
int main(){
    //int my_mark;      //declaration
    //my_mark=76; //initialization
    
    int my_mark=45;

    if(my_mark>=90){
        printf("Grade : Distinction");
    }
    else if (my_mark>=75){
        printf("Grade : First class");
    }
    else if (my_mark>=60){
        printf("Grade : Second class");
    }
    else{
        printf("Grade  pass");
    }

    return 0;
}