word = list(input("Enter a word: "))
letter = input("Enter a letter: ")
for letter in word:
      word.remove(letter)
print("".join(word))