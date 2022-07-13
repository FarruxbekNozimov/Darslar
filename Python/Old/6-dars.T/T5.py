l1 = [2, 4, 3]
l1.reverse()
l2 = [5, 6, 4]
l2.reverse()

l1_quti = 0
l2_quti = 0
for i in range(len(l1)):
      l1_quti += l1[i] * (10 ** ( (len( l1 ) - 1) -i) )
      l2_quti += l2[i] * (10 ** ((len(l1) - 1) - i))
print(list(map(int, str(l1_quti + l2_quti)))[::-1])
