list1 = [1, 3, 5, 7, 9, 10]
list2 = [2, 4, 6, 8]
list1.remove(list1[-1])
list1.extend(list2)
print(list1)