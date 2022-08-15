# Python3 code to demonstrate
# Add substring at specific index
# using join() + list() + insert()

# initializing string
test_string = 'geeksgeeks'

# initializing add_string
add_string = "for"

# printing original string
print("The original string : " + test_string)

# printing add string
print("The add string : " + add_string)

# initializing N
N = 5

# using join() + list() + insert()
# Add substring at specific index
res = list(test_string)
res.insert(N, add_string)
res = ''.join(res)

# print result
print("The string after performing addition : " + str(res))
