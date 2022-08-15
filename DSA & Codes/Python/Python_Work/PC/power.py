
class Person:
   # def __init__(self):
    #    self.base = 3
     #   self.exponent = 4
      #  self.result = 1


    # a static method to check if a Person is adult or not.
    @staticmethod
    def exponents(exponent, result, base):
        for exponent in range(exponent, 0, -1):
            result *= base

        print("Answer = " + str(result))

Exp = Person()

print(Exp.static.exponent(4, 1, 3))
