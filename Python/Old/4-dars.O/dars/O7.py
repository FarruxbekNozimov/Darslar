numbers = [
      [2, 1, 4],
      [3, 2, 5],
      [9, 6, 7],
      [1, 6, 8],
      [3, 4, 2],
      [7, 9, 1],
      [5, 2, 7]
]
target = []
[target.extend(numbers[i]) for i in range(len(numbers)) if i % 2 == 0]

print(target)
