son = 0
numbers = 9999
for i in range(numbers, 100, -1):
      for j in range(i, 100, -1):
            kopaytma = i * j
            if str(kopaytma) == str(kopaytma)[::-1] and kopaytma > son:
                  son = kopaytma
print(son)
