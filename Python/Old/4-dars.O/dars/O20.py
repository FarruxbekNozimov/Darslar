numbers = [(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]
# 1 - usul
'''
print(sorted(numbers, key=lambda x: x[1]))
'''
# 2 - usul
'''
for i in range(len(numbers)):
      numbers[i] = list(numbers[i])
for i in range(len(numbers)):
      numbers[i].reverse()
numbers.sort()
for i in range(len(numbers)) :
      numbers[i].reverse()
print(numbers)
'''




'''
numbers = [list(i) for i in numbers]
target = [numbers[i][1] for i in range(len(numbers))]

target.sort()
for j in range(len(numbers)):
      numbers[j][1] = target[j]
      numbers[j] = tuple(numbers[j])
print(numbers)
'''