my_string = '''sachin KUMAR \n sachin@GOOGLE.COM\n +91-12345-67890\n'''
name = (my_string.split('\n'))[0]
print(name.title().lower())
Email = (my_string.split('\n'))[1]
print(Email.title())
contact_no = (my_string.split('\n'))[2]
print(contact_no.title())





