list1 = [1, 4, 3, 9]
word = input(": ")
list1 = [word + str(list1[i]) for i in range(len(list1))]
print(list1)