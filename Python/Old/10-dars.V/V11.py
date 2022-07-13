class Human:
      def __init__(self, name, lastname, age):
            self.name = name
            self.lastname = lastname
            self.age = age
            self.fullname()
      def fullname(self):
            print(self.name + " " + self.lastname)

human1 = Human("Ali", "Reza", 23)
human2 = Human("Reza", "Ali", 21)
human3 = Human("Sara", "Reza", 19)

