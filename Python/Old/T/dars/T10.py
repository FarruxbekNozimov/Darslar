with open('FILES/text.txt', 'r') as file:
      text = file.read().split()

with open('FILES/WriteUpper.txt', 'w') as file1:
      for word in text:
            if word[0].isupper():
                  file1.write(word + '\n')