with open('FILES/text.txt', 'r') as file:
      text = file.read().split('is')
      print(len(text))