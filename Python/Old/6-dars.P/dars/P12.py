list1 = [[11,1,1], [4,5,20], [9,11,12], [7,8,9]]
list_sum = []

for i in list1:
    list_sum.append(sum(i))
print(list1[list_sum.index(max(list_sum))])