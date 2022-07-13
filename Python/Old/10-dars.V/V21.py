class Animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def eat(self):
        print("I am eating")

class Birds(Animal):
    pass

Owl = Birds("Owl", 2)
Owl.eat()

