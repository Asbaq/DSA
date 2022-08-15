def my_function(food):
  food.append("cherry")
  print(food.index("cherry"))
  food.remove("banana")
  food.insert(1, "Kiwi")
  for x in food:
    print(x)


fruits = ["apple", "banana", "cherry"]

my_function(fruits)

x = fruits.copy()
print(x)

print(fruits.count("cherry"))

cars = ['Ford', 'BMW', 'Volvo']
fruits.extend(cars)
print(fruits)

fruits.pop(2)
print(fruits)

fruits.reverse()
print(fruits)

cars.sort()
print(cars)

fruits.sort()
print(fruits)

fruits.clear()
print("\nClear", fruits)