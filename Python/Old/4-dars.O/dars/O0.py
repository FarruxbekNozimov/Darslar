numbers = [2, 1, -4 , -9, 0, -5, 8, 3]

# 1
''' numbers = [son for son in numbers if son % 2 == 0] '''
# 2
''' numbers = [son*3 for son in numbers] '''
# 3
'''[print(son) for son in numbers] '''
# 4
'''[print(numbers[i]) for i in range(len(numbers)) if i % 3 == 0]'''
# 5
numbers = [son * 2 if son > 0 else son * 0 for son in numbers]
print(numbers)

