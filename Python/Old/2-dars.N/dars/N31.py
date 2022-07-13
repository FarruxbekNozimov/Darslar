word = input("Enter a word: ")
i = 0
while i < len(word):
    if i % 2:
        print(word[i],end="")
    else:
        print(word[i].upper(), end="")
    i += 1
