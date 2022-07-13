# 1 - masala
'''
list1 = [True, False, "Hello", 3.2, 9, 2, 4.0, 5.9, 1]
print(max(list(filter(lambda x: type(x) == int, list1))))
print(min(list(filter(lambda x: type(x) == int, list1))))
'''
# 2 - masala
list2 = []
while True:
      try:
            list2.append(int(input("Enter a number: ")))
      except ValueError:
            print("You entered a wrong value")




