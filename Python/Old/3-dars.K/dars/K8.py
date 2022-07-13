word = input("Enter a word: ").lower().split()
for i in range(len(word)):
    print(word[i][0].upper() + word[i][1:-1] + word[i][-1].upper(), end=" ")