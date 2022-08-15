import numpy as np

a = np.array([101, 99, 87])
b = np.array([897, 97, 111])

print("Array a: ", a)
print("Array b: ", b)

for i in range(3):
    if a[i] > b[i]:
        print(a[i])
    else:
        print(b[i])

