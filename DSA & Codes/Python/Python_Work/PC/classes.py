class Person:
    "This is a person class"

    name = "Shivani"
    age = 20
    Subject = "Computer Science"
    RollNo = 28
    Class = 10

    def greet(self):
        print("Name=", self.name)
        print("Age =", self.age)
        print("Subject =", self.Subject)
        print("RollNo =", self.RollNo)
        print("Class =", self.Class)
        print('Hello')


# create a new object of Person class
harry = Person()
harry.greet()
#print(harry)