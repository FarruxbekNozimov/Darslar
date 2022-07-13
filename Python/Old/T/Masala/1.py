list1 = [1, 10, 20, 0, 59, 63, 0, 88, 0]

for i in range(len(list1)):
      if list1[i] == 0:
            list1.pop(i)
            list1.insert(0, 0)
print(list1)

