class Human():
    def __init__(self, name, age, profession):
        self.adult_age = age
        self.name = name

    def is_adult(self):
        if 18 >= self.adult_age:
            print(self.name, ": Voyaga yetmagan")
        else:
            print(self.name, ": 18+ ")


person1 = Human("Qahhor", 20, "student")
person2 = Human("Shohruh", 17, "student")
person3 = Human("Muzaffar", 15, "student")
person4 = Human("Samandar", 30, "student")
person1.is_adult()
person2.is_adult()
person3.is_adult()
person4.is_adult()

