#include <stdio.h>
float first, second, third, fourth, fifth;
float total, average, CGPA;
int roll_no;
char name;
void getstudentdata()
{
    printf("enter roll no:");
    scanf("%d",&roll_no);
    printf("enter the marks of 5 subjects:");
    scanf("%f %f %f %f %f",&first,&second,&third,&fourth,&fifth);
}

int gettotal()
{
    total = first + second + third + fourth + fifth;
    return total;
}
float getaverage() {
    average = total / 5;
    return average;   //RETURN 'AVERAGE' TO MAIN()

}
float getcgpa()
{    
    CGPA= average / 9.5;
    return CGPA;
}

int main()
{
    getstudentdata();
    float total=gettotal();       // calculate total of 5 marks
    float average=getaverage();      // calculate average
    float CGPA=getcgpa();         //to get CGPA
    printf("Student Name: %s\n", name);
    printf("Roll Number: %d\n", roll_no);
    printf("Total Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("CGPA: %.2f\n", CGPA);
    printf("the total is: %.2f",total);
    return 0;
}