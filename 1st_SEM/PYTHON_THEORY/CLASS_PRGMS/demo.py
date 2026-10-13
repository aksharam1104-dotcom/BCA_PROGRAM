unit = int(input("enter the units:"))
category = input("enter the category:")

if category=="commercial":
    if 0<=unit<=100:
        bill=unit*10
    elif 101<=unit<=300:
        bill=unit*12
    else:
        bill=unit*15
else:
    if 0<=unit<=100:
        bill=unit*5
    elif 101<=unit<=300:
        bill=unit*6
    else:
        bill=unit*8

peak = input("crossed the peak threshold [yes/no]:")
payment = input("payment before due date [yes/no]:")

if category=="commercial" and peak==1:
    bill = bill + 100

if payment==1:
    bill = bill - 50

print("Total bill =", bill)