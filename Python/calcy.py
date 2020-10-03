# Calculator using Python.

# Adding two numbers
def add(x, y):
    return x + y

# Subtracting two numbers
def subtract(x, y):
    return x - y

# Multiplying two numbers
def multiply(x, y):
    return x * y

# Dividing two numbers
def divide(x, y):
    return x / y


print("Select operation.")
print("1.Addition")
print("2.Subtraction")
print("3.Multiplication")
print("4.Division")

while True:
    # Input from User:
    choice = input("Enter choice(1/2/3/4): ")

    # Check the choices:
    if choice in ('1', '2', '3', '4'):
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if choice == '1':
            print(num1, "+", num2, "=", add(num1, num2))

        elif choice == '2':
            print(num1, "-", num2, "=", subtract(num1, num2))

        elif choice == '3':
            print(num1, "*", num2, "=", multiply(num1, num2))

        elif choice == '4':
            print(num1, "/", num2, "=", divide(num1, num2))
        break
    else:
        print("Invalid Input")