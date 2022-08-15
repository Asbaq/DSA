# Factorial of a number using recursion
def recursion(n):
   if n == 1:
       return n
   else:
       return n*recursion(n-1)

num = 7

# check if the number is negative
if num < 0:
   print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
   print("The factorial of 0 is 1")
else:
   print("The factorial of", num, "is", recursion(num))
