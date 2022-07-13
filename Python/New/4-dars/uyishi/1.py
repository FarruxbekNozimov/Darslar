class Animal:
    def __init__(self, name, what, why):
        self.name = name
        self.what = what
        self.why = why
    def run(self):
        print(f"{self.what} {self.name} uchun {self.why}ga kerak")

    def smell(self, obj):
        print(f"{self.name} smell {obj.name}")

class Wild(Animal):
    pass
class Domestic(Animal):
    pass
Lion = Wild("Lion", "Panja", "Quvlash")
Zebra = Domestic("Zebra", "Tuyoq", "Qochish")
Lion.run()
Zebra.run()
print()
Lion.smell(Zebra)
Zebra.smell(Lion)


