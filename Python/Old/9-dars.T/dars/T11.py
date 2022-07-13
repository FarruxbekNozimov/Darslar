class Avtomobil:
      def __init__(self, model, tezlik, rang, narx):
            self.model = model
            self.tezlik = tezlik
            self.rang = rang
            self.narx = narx
      def show_info(self):
            print("Model :", self.model, end=" ")
            print("Tezlik :", self.tezlik, end=" ")
            print("Rang :", self.rang, end=" ")
            print("Narx :", self.narx, end=" ")
            print()

car1 = Avtomobil('BMW', 100, 5, 2000)
car2 = Avtomobil('Audi', 120, 6, 3000)
car3 = Avtomobil('Mercedes', 90, 4, 1000)
car4 = Avtomobil('Toyota', 80, 3, 1500)
car5 = Avtomobil('Honda', 70, 2, 2000)

car1.show_info()
car2.show_info()
car3.show_info()
car4.show_info()
car5.show_info()
