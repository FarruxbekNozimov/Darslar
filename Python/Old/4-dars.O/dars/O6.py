word = list(input("Enter a word: "))

for i in range(len(word)):
      if word[i].isupper():
            word.append(word[i])
            word.remove(word[i])
print("".join(word))
