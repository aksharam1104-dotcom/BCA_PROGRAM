#include <stdio.h>

float first, second, third, fourth, fifth;
float total, average, CGPA;
int roll_no;
char name;

void getstudentdata()
{
    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    printf("Enter marks in 5 subjects: ");
    scanf("%f %f %f %f %f",&first, &second, &third, &fourth, &fifth);
}

int gettotal()
{
    total = first + second + third + fourth + fifth;
}
float getaverage() {
    average = total / 5;
    return average;   //RETURN 'AVERAGE' TO MAIN()

}
void getcgpa()
{    
    CGPA= average / 9.5;
}
void displaystudentdetails()
{
    printf("Student Name: %s\n", name);
    printf("Roll Number: %d\n", roll_no);
    printf("Total Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("CGPA: %.2f\n", CGPA);
}

int main()
{
    getstudentdata();  //collect student data
    int total();       // calculate total of 5 marks
    getaverage();      // calculate average
    getcgpa();         //to get CGPA
    displaystudentdetails();    //DISPLAY STUDENT DETAILS
printf("the total is: %d",total);
    return 0;
}