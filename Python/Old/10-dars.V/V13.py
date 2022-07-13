class get_mylist:
      def __init__(self, mylist):
            self.mylist = mylist

      def delate_last_item(self):
            self.mylist.pop()
            return self.mylist

list1 = get_mylist([1,2,3,4,5,6,7,8])
print(list1.delate_last_item())
