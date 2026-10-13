
# Bank operation using list and tuple

details = []

name = input("Enter name: ")
pan = input("Enter PAN number: ")
dob = input("Enter DOB: ")

details.append(input("Enter email: "))
details.append(input("Enter contact number: "))
details.append(input("Enter place name: "))
details.append(float(input("Enter initial balance: ")))

account = (name, pan, 1000, dob, details)

print("\n1. Deposit")
print("2. Withdraw")
print("3. Balance")

choice = int(input("Enter choice: "))

if choice == 1:
    amount = float(input("Enter deposit amount: "))
    account[4][3] += amount
    print("Deposit successful")

elif choice == 2:
    amount = float(input("Enter withdrawal amount: "))
    if amount > 0 and amount <= account[4][3]:
        account[4][3] -= amount
        print("Withdrawal successful")
    else:
        print("Insufficient balance or invalid amount")

elif choice == 3:
    print("Current balance:", account[4][3])

if choice == 1 or choice == 2:
    print("Current balance:", account[4][3])
