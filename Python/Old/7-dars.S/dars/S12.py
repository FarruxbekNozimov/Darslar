def list_qil(a):
      list1 = []
      for i in range(a):
            list1.append(input(f"{i+1} - son >>> "))
      return list1

print(list_qil(5))