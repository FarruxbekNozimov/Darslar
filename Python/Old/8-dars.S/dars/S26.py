word = input("Enter a word: ")
dict1 = {}
for i in word:
      dict1[i] = word.count(i)
print(dict1)
