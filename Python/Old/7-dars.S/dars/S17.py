def big_smal_letters(word):
      big, small = 0, 0
      for i in range(len(word)):
            if word[i].isupper():
                  big += 1
            elif word[i].islower():
                  small += 1
      return [big, small]

print(big_smal_letters("Good Luck"))