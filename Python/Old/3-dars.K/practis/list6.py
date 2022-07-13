list1 = [[10, 20], [40], [30, 56, 25], [10, 20], [33], [40]]
for i in range(len(list1)):
      a = list1[0:i+1]
      if a.count(list1[i]) == 1:
            print(list1[i], end="")
