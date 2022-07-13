numbers = [
      [5, 3, 7],
      [1, 4, 9],
      [2, 8, 6]
]

for i in range(len(numbers)):
      for j in range(len(numbers)):
            if i + j == len(numbers) - 1:
                  print(numbers[i][j], end=' ')
