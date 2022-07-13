with open('Tovar.txt') as file:
      text = file.read().split()

with open('3K.txt', 'w') as file1:
      for i in text:
            if 'k' in i or 'K' in i:
                  file1.write(i + '\n')

with open('3A.txt', 'w') as file2:
      for i in text:
            if 'a' in i or 'A' in i:
                  file2.write(i + '\n')
