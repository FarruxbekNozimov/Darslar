class Human:
    def __init__(self, name):
        self.name = name

    def say_hello(self):
        print(f"Hello, {self.name}!")

falonchi = Human(input("Ismingiz: "))
falonchi.say_hello()

