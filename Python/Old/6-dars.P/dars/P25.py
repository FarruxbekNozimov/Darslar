list1 = [9,9,9,9]
quti = 0
for i in range(len(list1)):
      quti += list1[i] * (10 ** ( (len( list1 ) - 1) -i) )
print(list(map(int, str(quti+1))))