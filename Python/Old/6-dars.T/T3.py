with open('FILES/T3.txt', 'r') as f:
      text = f.read().split()
      print(max(text, key=len))