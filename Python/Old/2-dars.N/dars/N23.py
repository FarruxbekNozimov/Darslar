word = input("Enter a word: ")
print(word.capitalize().replace(word[-1], word[-1].upper()))
# salom
# print(word[0].upper() + word[1:-1:] + word[-1].upper())