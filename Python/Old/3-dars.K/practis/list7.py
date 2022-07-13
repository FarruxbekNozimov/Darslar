letter = input("Enter a letter: ")
list1 = ['abcd', 'abc', 'bcd', 'bkie', 'cder', 'cdsw', 'sdfsd', 'dagfa', 'acjd']
target = []
for i in range(len(list1)):
      if list1[i].startswith(letter):
            target.append(list1[i])
print(target)