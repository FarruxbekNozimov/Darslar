class Shape:
    def __init__(self, name):
        self.name = name
        self.shape = ""

class Line(Shape):
    def __init__(self, name):
        super().__init__(name)
        self.shape = "*************"

class Triangle(Shape):
    def __init__(self, name):
        super().__init__(name)
        self.shape = """
        *
        * *
        ****
        """

class Rectangle(Shape):
    def __init__(self, name):
        super().__init__(name)
        self.shape = """
        *****
        *   *
        *****
        """

class NullShape(Shape):
    def __init__(self, name):
        super().__init__(name)
        self.shape = "\n\n"

shapes = [Line("bir"), Triangle("uch"), Rectangle("to'rt"), NullShape("null")]
a = input(": ")
for shape in shapes:
    shakl = shape
    if shakl.name == a.lower():
        print(shakl.shape)
        exit()
print("Bunday shakl kiritilmagan")




