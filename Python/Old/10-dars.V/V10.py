class Bino():
      def __init__(self, height, color):
            self.height = height
            self.color = color
            self.show()

      def show(self):
            if self.height > 50:
                  print(self.height, self.color)


bino1 = Bino(512, "red")
bino2 = Bino(432, "blue")
bino3 = Bino(23, "green")
bino4 = Bino(12, "yellow")
bino5 = Bino(312, "red")

