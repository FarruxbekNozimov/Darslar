list1 = [7, 8, 1, 3, 4, 6, 7, 5]
list2 = list1[:]

list2 = [list2[i]**3 if i %2 else list2[i]**2 for i in range(len(list2))]
print(list1)
print(list2)

