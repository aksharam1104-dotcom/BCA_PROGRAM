unit = int(input("enter the units:"))
category = input("enter the category:")
if category=="commercial":
    if 0<=unit<=100:
        base=100
        bill=unit*10
    elif 101<=unit<=300:
        mid=unit-100
        bill=mid*12 + 100*10
    else:
        high=unit-(100+(unit-100))
        mid=unit-(100+high)
        bill=(high*15) + (mid*12)+(100*10)
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