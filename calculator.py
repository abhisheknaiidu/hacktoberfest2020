def add(n1,n2):
       return n1+n2
def sub(n1,n2):
       return n1-n2
def mul(n1,n2):
       return n1*n2
def div(n1,n2):
       return n1/n2
print("Select the operation:\n" \
           "1. add\n" \
           "2. subtract\n" \
           "3. multiply\n" \
           "4. divide\n" )
choice = int(input("Enter the operation(1,2,3,4):"))
a = int(input("Enter first number:"))
b = int(input("Enter second number:"))
if choice == 1:
    print(a, "+", b, "=", add(a, b))
elif choice == 2:
    print(a, "-", b, "=", sub(a, b))
elif choice == 3:
    print(a, "*", b, "=", mul(a, b))
elif choice == 4:
    print(a, "/", b, "=", div(a, b))
else:
       print("invalid input")
