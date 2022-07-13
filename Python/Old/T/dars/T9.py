with open('FILES/text.txt', 'r') as file:
      text = file.read().split()
      text = [i for i in text if len(i) < 5]
      print(len(text))
