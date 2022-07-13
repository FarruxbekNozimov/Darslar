num = int(input(": "))
numbers = (5, -3, 4, -2, 1, -9, 8, -6, 7, 0, 4)

numbers = list(numbers)
for son in numbers:
      if son == num:
            numbers.remove(son)
print(tuple(numbers))

