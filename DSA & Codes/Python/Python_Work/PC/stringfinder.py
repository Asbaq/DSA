mylist = []
n = int(input("Enter how many string (names): "))

print("Enter strings: ")
for i in range(n):
    val = input()
    mylist.append(val)

#print("Enter an element to be search: ")
s1 = input("Enter a string to search: ")

for i in range(n):
    if s1 == mylist[i]:
        print("Found at position:", i + 1)


