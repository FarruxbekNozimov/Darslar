list1 = [1, 'abcd', 3, 1.2, 4, 'xyz', 5, 'pqr', 7, -5, -12.22]
list1 = [x for x in list1 if isinstance(x, int)]
print(max(list1))