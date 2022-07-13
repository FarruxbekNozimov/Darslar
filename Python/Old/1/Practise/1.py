import random as r

# 1 - masala
"""
dict1 = {0: 7, 1: 8, 2: 9, 3: 0, 4: 1, 5: 2, 6: 3, 7: 4, 8: 5, 9: 6}
son = input("Enter the son: ")
[print(dict1[i], end='') for i in son]
"""

# 2 - masala
"""
list1 = list(r.randint(100, 1000) for i in range(100))
N = r.choice(list1)
[print(list1[i]) for i in range(list1.index(N)) if list1[i] % 2 == 0]
"""

# 3 - masala
"""
list1 = list(r.randint(1, 1000000) for i in range(1000))
N = r.choice(list1)
for i in range(list1.index(N), len(list1)):
    a = True
    for j in range(2, int(i ** 0.5 + 1)):
        if i % j == 0:
            a = False
            break
    if a:
        print(i)

"""
