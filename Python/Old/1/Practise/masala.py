# 1 - masala
"""
def is_valid(smth):
    dict1 = {'(': ')', '[': ']', '{': '}', '<': '>'}
    empty = []
    for i in smth:
        if i in dict1:
            empty.append(i)
        elif empty and dict1[empty[-1]] == i:
            empty.pop()
        else:
            return False
    return not empty

print(is_valid(input(": ")))
"""
# 2 - masala
"""
word = input(": ").split('-')
print("-".join(sorted(word)))
"""
# 3 - masala
"""
list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
list2 = [2, 4, 6, 8, 10]
print(list(filter(lambda x: x not in list2, list1)))
"""
