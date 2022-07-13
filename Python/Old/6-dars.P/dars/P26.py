list1 = [2, 1, 3, 4, 5, 6, 2, 4, 3, 1, 5, 2, 4]
dict_count = {}
for i in range(1, max(list1)+1):
      dict_count[i] = list1.count(i)
print(dict_count)
