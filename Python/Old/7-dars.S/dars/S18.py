def orasida_kvadrat(a, b):
      list1 = []
      for i in range(b):
            if a < i * i <= b:
                  list1.append(i * i)
      return list1

print(orasida_kvadrat(15, 40))
