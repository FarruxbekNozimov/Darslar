class Odam():
    def __init__(self, name):
        self.name = name

    def baqirish(self):
        print(self.name, " : Oh, nooooo!!!")


class It:
    def __init__(self, laqab):
        self.laqab = laqab

    def tishlash(self, Odam):
        print(self.laqab + " : Vov Vov G'arjj")
        Odam.baqirish()


Bobik = It("Olapar")
Human = Odam("Ozodbek")
Bobik.tishlash(Human)


