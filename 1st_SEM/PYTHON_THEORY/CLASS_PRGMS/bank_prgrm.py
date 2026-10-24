#implement the python program using list and tuples write a bank operation to manage 1 account and to perform deposit, withdraw, balance.
# List inside the tuple,IN TUPLE STORE(store name,pan number,account number=1000,DOB)
#IN LIST STORE(EMAIL,CONTACT NO.,ADDRESS(PLACE NAME), CURRENT BALANCE) 
#COLLECT these data from keyboard
name = input("Enter the account holder name: ")
pan_number = int(input("Enter PAN number: "))
dob = input("Enter date of birth: ")
account_number = 1000
emailid=input("Enter the email_id:")
contact=int(input("Enter the contact number:"))
address=input("Enter the address:")
balance=int(input("Enter the current balance:"))
bank_details=(name,pan_number,dob,account_number,[emailid,contact,address,balance])
current_balance=bank_details[4][3]
new_deposit=500
current_balance=current_balance+new_deposit
bank_details[4][3]=current_balance
print("bank_details:",bank_details)



