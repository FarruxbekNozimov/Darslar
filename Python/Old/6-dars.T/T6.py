with open('FILES/T6.txt', 'r') as f:
      sanoq = 0
      for line in f:
            if line.startswith('T') or line.startswith('t'):
                  continue
            else:
                  sanoq += 1
      print(sanoq)