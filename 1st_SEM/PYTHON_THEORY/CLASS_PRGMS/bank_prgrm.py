#implement the python program using list and tuples write a bank operation to manage 1 account and to perform deposit, withdraw, balance.
# List inside the tuple,IN TUPLE STORE(store name,pan number,account number=1000,DOB)
#IN LIST STORE(EMAIL,CONTACT NO.,ADDRESS(PLACE NAME), CURRENT BALANCE) 
#COLLECT these data from keyboard
details=([])
def read_data():
    name = input("Enter the account holder name: ")
    pan_number = int(input("Enter PAN number: "))
    dob = input("Enter date of birth: ")
    account_number = 1000
    details.append(input("Enter email: "))
    details.append(input("Enter contact number: "))
    details.append(input("Enter place name: "))
    print("the bank details are ",details)
    
read_data()


