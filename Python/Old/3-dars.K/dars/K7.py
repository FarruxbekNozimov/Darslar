word = input("Enter a word: ")
a = len(word)//2
print(word[:a] + word[a:].upper())