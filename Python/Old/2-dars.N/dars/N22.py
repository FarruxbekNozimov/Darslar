word = input("Enter a word: ")
# test -> tets
a = len(word)
if a % 4 == 0:
    word = word[:a//2:] + word[a//2:][::-1]
    print(word)
else:
    print("4 ga bo'linmaydi")
