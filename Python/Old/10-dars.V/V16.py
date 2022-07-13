class Str_1:
      def get_string(self):
            self.str = input('Enter a string: ')
      def update_string(self):
            print(self.str[0].upper() + self.str[1:-1] + self.str[-1].upper())

str1 = Str_1()
str1.get_string()
str1.update_string()
