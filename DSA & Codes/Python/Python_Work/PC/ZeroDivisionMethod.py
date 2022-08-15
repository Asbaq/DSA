n=int(input("Enter the value of n:"))
d=int(input("Enter the value of d:"))

try:
    q = n/d
    print("Quotient:", q)
except ZeroDivisionError:
    print("Division by Zero!")