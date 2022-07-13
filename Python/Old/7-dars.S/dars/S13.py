def qosh(first, second):
      for i in range(len(first)):
            second[i] = second[i] + str(first[i])
      return second

print(qosh([1, 4, 3, 9], ['chelsea', 'real', 'barca', 'MU']))