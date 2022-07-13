word = input("Enter a word: ")
i = 0
while i < len(word):
    if word[i].isdigit():
        print(word.find(word[i]))
        break
    i += 1
