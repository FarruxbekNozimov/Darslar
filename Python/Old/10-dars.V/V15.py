class Car:
      def __init__(self, brands, cars):
            self.brands = brands
            self.cars = cars

      def brand_exist(self):
            return self.cars in self.brands

car1 = Car(['BMW', 'Audi', 'Mercedes', 'Volkswagen'], 'BMW')
print(car1.brand_exist())

car2 = Car(['BMW', 'Audi', 'Mercedes', 'Volkswagen'], 'Ferrari')
print(car2.brand_exist())

