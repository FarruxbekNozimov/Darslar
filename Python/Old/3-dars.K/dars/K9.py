# list1 = list(input("Enter a list of elements: "))
# list2 = list(input("Enter a list of elements: "))
# target = []

# for i in range(len(list1)):
#       for j in range(len(list2)):
#             if list1[i] == list2[j] and list1[i] not in target:
#                   target.append(list1[i])
# print(target)


print(list(set(input('=> ')).intersection(set(input('=> ')))))