numbers = [
      [5, 3, 7],
      [1, 4, 9],
      [2, 8, 6]
]
# Faqat 3 o'lchamli list uchun
'''
print(max(sum(numbers[0]), sum(numbers[1]), sum(numbers[2])))
'''
# Istalgan list uchun
'''
for son in range(len(numbers)):
      max_num = sum(numbers[0])
      if max_num < sum(numbers[son]):
            max_num = sum(numbers[son])
print(max_num)
'''