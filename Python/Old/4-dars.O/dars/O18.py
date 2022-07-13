numbers = [
      [5, 3, 7],
      [1, 4, 9],
      [2, 8, 6]
]

a,b = list(),0
for i in range(len(numbers)):
      for  j in range(len(numbers[i])):
             b += numbers[j][i]
      a.append(b)
      b = 0
print(max(a))
