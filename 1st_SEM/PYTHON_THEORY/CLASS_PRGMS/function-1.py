name = ''
rollno = 0
first=0
second=0
third=0
total = 0
average = 0
percentage = 0
grade = 0
result = 0
def read_data():
    global first,second,third,name,rollno
    name=input("enter name:")
    rollno= int(input("enter roll_no:"))
    first=int(input("FIRST SUBJECT MARK: "))
    second=int(input("SECOND SUBJECT MARK:"))
    third=int(input("THIRD SUBJECT MARK:"))
    return first,second,third,name,rollno
def gettotal():
    global total
    total=first+second+third
    print("TOTAL:",total)
    return total
def getaverage():
    global average
    average=total/3
    print("AVERAGE:",average)
    return average
def getpercentage():
    global percentage
    if percentage >= 75:
        print("DISTINCTION")
    elif percentage >=60:
        print("FIRST CLASS")
    else:
        print("fail")
        print("PERCENTAGE:",percentage)
    return percentage
def findgrade():
    global grade
    if percentage>=75:
        print("grade:A")
    elif percentage>=60:
        print("grade:B")
    else: print("GRADE:C")
    print("GRADE:",grade)
    return grade
    for i in range (1,4):
        a,b,c,d,e=read_data()
        total=gettotal()
        getaverage()
        getpercentage()
        findgrade()

