# Aylana uzunligi=2×π×radius
# Aylana yuzasi S=π*radius*radius
class Aylana:
      def __init__(self, radius):
            self.radius = radius
            self.PI = 3.14

      def aylana_uzunligi(self):
            return 2 * self.PI * self.radius
      def aylana_yuzasi(self):
            return self.PI * self.radius ** 2

aylana1 = Aylana(5)
print(aylana1.aylana_uzunligi())
print(aylana1.aylana_yuzasi())









