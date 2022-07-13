word = input("Enter a sentence: ")
i = 0
while i < len(word):
    if word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o' or word[i] == 'u':
        print(word[i].upper(),end="")
    else:
        print(word[i], end="")
    i += 1
