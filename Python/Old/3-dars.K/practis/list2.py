numbers = input("Enter numbers: ").split()
string = input("Enter string: ")
list1 = []

for i in range(len(numbers)):
    list1.append(string + numbers[i])
print(list1)