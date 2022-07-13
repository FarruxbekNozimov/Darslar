# 1 - masala
"""
for i in range(1000, 100000):
    a = 0
    i = str(i)
    for j in i:
        if i.count(j) == 2:
            a += 1
    if a == 0:
        print(i)
"""
# 2 - masala
"""
try:
    num1 = input(": ")
    a = []
    for i in range(len(num1)):
        a.append(num1[i] + (len(num1)-i-1) * '0')
    print('+'.join(a))
except:
    print("Son kiriting")
"""
# 3 - masala
"""
num = int(input(": "))
def tub_boluvchi(son):
    lst = []
    a = 2
    for i in range(a, son + 1):
        while son % i == 0:
            lst.append(i)
            son //= i
        a += 1
    return lst
print(tub_boluvchi(num))
"""
# 4 - masala
# import random as r
# import math
# lst = list(map(int, list(input(": "))))
#
# def rand_fact(lst1):
#     lst1_rand = []
#     while True:
#         a = r.sample(lst1, len(lst1))
#         if a not in lst1_rand:
#             lst1_rand.append(a)
#         if len(lst1_rand) == math.factorial(len(lst1)):
#             return lst1_rand
#
# print(rand_fact(lst))

# 5 - masala
# """
lst1 = [1, 3, 4, 9, 3, 4, 0, -1, 7, 8]
a = 0
for i in range(len(lst1)):
    if i + 1 < len(lst1) and lst1[i] > lst1[i+1]:
        a += 1
print(a+1)
# """
# 5++ - masala
# index = int(input(": "))
# smth = input(": ")
# tuple = ("Hello", 12, "World", True, 5.6, False)
# tuple = (tuple[:index] + (smth,) + tuple[index+1:])
#
# print(tuple)




















