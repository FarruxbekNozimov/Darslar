# Odam _____ni Tepsa _____ Uchsin

class Human:
    def __init__(self, number):
        self.number = number

    def kick(self, Ball):
        print(f"{self.number} - o'yinchi tepdi")
        Ball.fly()

class Ball:
    def fly(self):
        print("Koptok uchdi")

Player = Human(7)
Ball = Ball()
Player.kick(Ball)
