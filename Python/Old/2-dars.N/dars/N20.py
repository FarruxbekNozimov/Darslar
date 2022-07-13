word = input("Enter a word: ")
# Chelsea
start = word[0]
end = word[-1]
replace = end + word[1:-1] + start
print(replace)


