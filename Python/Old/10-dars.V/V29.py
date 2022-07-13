class Human:
    def __init__(self, name):
        self.name = name

    def sing(self, Person):
        print(self.name, " : Nanay nay nanay")
        Person.listen()

    def listen(self):
        print(self.name, ": Eshityapti")
        self.speak()

    def speak(self):
        print(self.name, ": Yashang xofiz dedi")


person = Human("G'ishmat")
person1 = Human("Baqay togo")
person.sing(person1)
