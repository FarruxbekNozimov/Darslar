son = int(input("Enter the name of the son: "))
number = son + (son - 1)
for i in range(number):
      for j in range(number):
            for a in range(son):
                  if i == a or i == number - (a+1) or j == a or j == number - (a+1):
                        print(f"{son-a}", end="  ")
                        break
      print()