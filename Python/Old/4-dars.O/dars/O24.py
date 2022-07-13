list1 = list()
a = input("Nechta son kiritmoqchisiz? ")
for i in range(len(a)):
      list1[i] = input(": ")
list1.remove(max(list1))
print(max(list1))
