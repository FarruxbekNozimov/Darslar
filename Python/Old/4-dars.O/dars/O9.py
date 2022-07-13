list1 = ["Hello", "take"]
list2 = ["Dear", "Sir"]

target = []

for i in range(len(list1)):
      for j in range(len(list2)):
            target.append(list1[i] + " "+ list2[j])
print(target)