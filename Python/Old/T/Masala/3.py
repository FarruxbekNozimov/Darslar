number = 600851475143
list1 = []
for i in range(2, number//2):
      a = 0
      if number % i == 0:
            for j in range(2, i) :
                  if i % j == 0 :
                        a = 1
                        break
            if a == 0:
                  list1.append(i)
                  print(list1)
print("BU" + max(list1))


# lilst1 = []
# for i in range(2, number//2):
#       a = 0
#       for j in range(2, i//2):
#             if i % j == 0:
#                   a = 1
#                   break
#       if number % i == 0 and a == 0:
#             lilst1.append(i)
#             print(lilst1)
