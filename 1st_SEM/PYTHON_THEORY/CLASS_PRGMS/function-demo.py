name = ''
rollno = 0
first = 0
second = 0
third = 0
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

def gettotal():
    global total
    total=first+second+third
    print("TOTAL:",total)

def getaverage():
    global average
    average=total/3
    print("AVERAGE:",average)
def getpercentage():
    global percentage
    percentage=total/300*100
    print("PERCENTAGE:",percentage)
def findgrade():
    global grade
    if percentage>=75:
        print("grade:A")
    elif percentage>=60:
        print("grade:B")
    else: print("GRADE:C")
    print("GRADE:",grade)
    
for i in range (1,4):
    read_data()
    gettotal()
    getaverage()
    getpercentage()
    findgrade()

