class get_num:
      def __init__(self, number):
            self.num = number

      def delate_first_item(self):
            self.num.pop(0)
            return self.num

list2 = get_num([12,3,4,5,7,8])
print(list2.delate_first_item())