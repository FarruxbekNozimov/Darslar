# 1 - masala
'''
list1 = ["APPLE", "BANANA", "MELON", "CHERRY", "ORANGE"]
print(list(map(lambda x: x.lower(),list1)))
'''

# 2 - masala
''':
list1 = [2, 5, 6, 9, 9, 0]
print(list(map(lambda x: 0 if x % 2 else x, list1)))
'''

# 3 - masala
# '''
list1 = ["hello", "5", "-2", "@pple", True, "42.5"]
print(list(filter(lambda x: type(x) != bool and not x.isalpha(), list1)))
# '''

# 4 - masala
'''
str1 = "Flash photography is best used in full sunlight."
unli_list = ['a', 'i', 'u', 'e', 'o']
print(list(filter(lambda x: x in unli_list , str1)))
'''

# 5 - masala
'''
lst1 = [200, 900, 820, 420, 300]
print(list(map(lambda x: x + 200 if x < 800 else x, lst1)))
'''

# 6 - masala
'''
import functools
lst1 = [5, -2, -1, 9, 2]
print(functools.reduce(lambda x, y: x + y if y > 0 else x, lst1))
'''


