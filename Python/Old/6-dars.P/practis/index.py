with open('FILES/index.txt', 'r') as f:
      text = f.read().split('\n')
      les_2 = []
      word = input('Enter a name: ')
      for line in text:
            line = line.split(',')
            if line[-1] == 'True':
                  les_2.append(line[3])
      print(sorted(les_2))


# ----1----
'''            if float(line[-2].strip('$')) > 500 and float(line[-2].strip('$')) < 1000:
                  print(line[0], line[2])
'''
