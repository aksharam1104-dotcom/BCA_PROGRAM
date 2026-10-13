//program to store and display 5 subject marks
#include<stdio.h>
int main(){
    int my_marks[5];
    int sub_marks [5];   // declares an array with size 5 of 'int' type
    //storing data/array initialization - array_name[index]=data/value;
    sub_marks[0]=80; //stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;  //static array initialization 
    // fetch first array element from 'sub_marks'
    printf("First subject mark:%d\n",sub_marks[0]);
    printf("second subject mark:%d\n",sub_marks[1]);
    printf("third subject mark:%d\n",sub_marks[2]);
    printf("fourth subject mark:%d\n",sub_marks[3]);
    printf("Fifth subject mark:%d\n",sub_marks[4]);
    for(int i=0;i<5;i++){
        printf("ENTER %d SUBJECT MARKS:[INT DATA]",i+1);
        scanf("%d",&my_marks[i]);
    }    
}
    
