num = int(input(": "))
numbers = (5, -3, 4, -2, 1, -9, 8, -6, 7, 0, 4)


for i in range(len(numbers)):
      if numbers[i] == num:
            a = i
      else:
            a = "| 404 |"
print(a)