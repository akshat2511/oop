import cx_Oracle

# Establish a connection to your Oracle database
connection = cx_Oracle.connect("username/password@localhost/xe")  # Replace with your connection string

# Create a cursor to interact with the database
cursor = connection.cursor()

# Function to insert student details
def insert_student():
    S_ID = input("Enter Student ID: ")
    Student_Name = input("Enter Student Name: ")
    Father_Name = input("Enter Father's Name: ")
    Mother_Name = input("Enter Mother's Name: ")
    Age = int(input("Enter Age: "))
    Contact_Number = input("Enter Contact Number: ")
    Email_Address = input("Enter Email Address: ")
    Aadhar_Number = input("Enter Aadhar Number: ")

    cursor.execute("INSERT INTO Student_Details (S_ID, Student_Name, Father_Name, Mother_Name, Age, Contact_Number, Email_Address, Aadhar_Number) VALUES (:S_ID, :Student_Name, :Father_Name, :Mother_Name, :Age, :Contact_Number, :Email_Address, :Aadhar_Number)",
                   S_ID=S_ID, Student_Name=Student_Name, Father_Name=Father_Name, Mother_Name=Mother_Name, Age=Age, Contact_Number=Contact_Number, Email_Address=Email_Address, Aadhar_Number=Aadhar_Number)
    connection.commit()
    print("Student details inserted successfully.")

# Function to insert payment details
def insert_payment():
    Transaction_ID = input("Enter Transaction ID: ")
    S_ID = input("Enter Student ID: ")
    Amount = int(input("Enter Amount: "))
    Discount_Percentage = int(input("Enter Discount Percentage: "))
    Date_Time = input("Enter Date and Time (YYYY-MM-DD HH:MM:SS): ")

    cursor.execute("INSERT INTO Payment_Details (Transaction_ID, S_ID, Amount, Discount_Percentage, Date_Time) VALUES (:Transaction_ID, :S_ID, :Amount, :Discount_Percentage, TO_TIMESTAMP(:Date_Time, 'YYYY-MM-DD HH24:MI:SS'))",
                   Transaction_ID=Transaction_ID, S_ID=S_ID, Amount=Amount, Discount_Percentage=Discount_Percentage, Date_Time=Date_Time)
    connection.commit()
    print("Payment details inserted successfully.")

# Add functions for other tables (Login_Details, Student_Address, COURSES, FACULTY) similarly

# Main menu
while True:
    print("\nMenu:")
    print("1. Insert Student Details")
    print("2. Insert Payment Details")
    # Add more options for other tables

    print("7. Exit")
    choice = input("Enter your choice: ")

    if choice == '1':
        insert_student()
    elif choice == '2':
        insert_payment()
    # Add more branches for other tables

    elif choice == '7':
        cursor.close()
        connection.close()
        print("Goodbye!")
        break
    else:
        print("Invalid choice. Please try again.")
