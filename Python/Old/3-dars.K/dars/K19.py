word = input("Enter a word: ")
print(word[:len(word)//2][::-1] + word[len(word)//2:][::-1])