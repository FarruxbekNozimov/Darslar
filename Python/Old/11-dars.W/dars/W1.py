class Son:
    def __init__(self, num1, num2=0):
        self.num1 = num1
        self.num2 = num2

    def ildiz(self):
        if self.num2 == 0:
            print(int(self.num1 ** 0.5))
        else:
            print("Siz 2 ta son kiritdingiz")
    def kv(self):
        if self.num2 == 0:
            print(self.num1 ** 2)
        else:
            print("Siz 2 ta son kiritdingiz")
    def kub(self):
        if self.num2 == 0:
            print(self.num1 ** 3)
        else:
            print("Siz 2 ta son kiritdingiz")
    def yigindi(self):
        if self.num2 != 0:
            print(self.num1 + self.num2)
        else:
            print("Siz 1 ta son kiritdingiz")
    def ayirma(self):
        if self.num2 != 0:
            print(self.num1 - self.num2)
        else:
            print("Siz 1 ta son kiritdingiz")
    def kopaytma(self):
        if self.num2 != 0:
            print(self.num1 * self.num2)
        else:
            print("Siz 1 ta son kiritdingiz")
    def bolinma(self):
        if self.num2 != 0:
            print(self.num1 // self.num2)
        else:
            print("Siz 1 ta son kiritdingiz")


son = Son(4)
son.ildiz()
son.kv()
son.kub()
son.yigindi()
son.ayirma()
son.kopaytma()
son.bolinma()


