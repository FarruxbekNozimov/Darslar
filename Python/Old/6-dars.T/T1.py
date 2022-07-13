with open('FILES/T1.txt', 'r') as file:
      text = file.read().split('\n')
      print(text[-1])
