import time

class Odam:
    def __init__(self, ism):
        self.ism = ism

    def yugurish(self):
        print(self.ism, ": Yuguryapti")
        time.sleep(5)
        self.yiqilish()

    def yiqilish(self):
        print(self.ism, ": Ingaaa")

odam1 = Odam("Mamarayim")
odam1.yugurish()


