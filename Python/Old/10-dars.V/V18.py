class rectangle:
      def __init__(self, eni, boyi):
            self.eni = eni
            self.boyi = boyi
      def get_perimeter(self):
            return 2 * (self.eni + self.boyi)
      def get_area(self):
            return self.eni * self.boyi

uch1 = rectangle(5,6)
print(uch1.get_perimeter())
print(uch1.get_area())
uch2 = rectangle(7,8)
print(uch2.get_perimeter())
print(uch2.get_area())
uch3 = rectangle(9,10)
print(uch3.get_perimeter())
print(uch3.get_area())


