# 1-masala
"""
list1 = [(10, "Tom"), (20, "John"), (30, "Bob")]
num = int(input(": "))

for i in range(len(list1)):
    list1[i] = list(list1[i])
    list1[i][0] = num
    list1[i] = tuple(list1[i])
print(list1)
"""
# 2 - masala
"""
lst = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
num = int(input(": "))
lst = [lst[i:i + num] for i in range(0, len(lst), num)]
print(lst)
"""



