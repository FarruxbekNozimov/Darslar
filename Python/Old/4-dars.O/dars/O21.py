list1 = [2, -1, 5, -3, 8, -4, 6, 7, 9]
list2 = [1, 6, 7, -3, -9, -4, -5]

for i in range(len(list1)):
      for j in range(len(list2)):
            if list1[i] == list2[j]:
                  print(list1[i])

