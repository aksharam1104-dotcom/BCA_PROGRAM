# Process n number of students
# Name, roll no, phone no, email, 5 subject marks and total
# Using nested list

student_data = []

def read_data():
    n = int(input("Enter number of students: "))

    for i in range(n):
        print("Enter details of student \n", i + 1)

        name = input("Enter name: ")
        rollno = int(input("Enter roll no: "))
        phone = input("Enter phone no: ")
        email = input("Enter email: ")

        marks = []
        marks.append(int(input("Enter first subject mark: ")))
        marks.append(int(input("Enter second subject mark: ")))
        marks.append(int(input("Enter third subject mark: ")))
        marks.append(int(input("Enter fourth subject mark: ")))
        marks.append(int(input("Enter fifth subject mark: ")))

        student_data.append([name, rollno, phone, email, marks])

    print("Student data =", student_data)


def calculate_data():
    for student in student_data:
        total = sum(student[4])
        print("Name:", student[0])
        print("TOTAL:", total)


read_data()
calculate_data()
