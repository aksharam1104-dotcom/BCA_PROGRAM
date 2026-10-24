# Collect employee details
name = input("Enter the employee name: ")
number = int(input("Enter the employee number: "))
company_name = input("Enter Company Name: ")
salary = int(input("Enter the Salary: "))
contact_no = int(input("Enter contact no.: "))
email = input("Enter email id: ")

# Store details in a set
EMPLOYEE = {name, number, company_name, salary}
EMPLOYEE.add(contact_no)
EMPLOYEE.add(email)

print("Employee details in set:", EMPLOYEE)

for i in EMPLOYEE:
    print([i])

# Store details in a dictionary
EMPLOYEE_dict = {
    "name": name,
    "number": number,
    "company_name": company_name,
    "salary": salary
}

EMPLOYEE_dict["contact_no"] = contact_no
EMPLOYEE_dict["email"] = email

print("\nEmployee details in dictionary:", EMPLOYEE_dict)

# Display details in tabular format
print("\nName\tNumber\tCompany\tSalary\tContact No.\tEmail")

for i in EMPLOYEE_dict:
    print(EMPLOYEE_dict[i], end="\t")

print()