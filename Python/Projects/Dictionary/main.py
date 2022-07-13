import os
while 1:
      with open("dictionary.txt", "a+") as file:
            os.system("cls")
            print("***************************")
            print("*   1 - Add New Word      *")
            print("*   2 - Search Word       *")
            print("*   3 - Update Word       *")
            print("*   4 - List Word         *")
            print("*   5 - Exit              *")
            print("***************************")
            numbers = int(input(">>> "))
            if numbers == 1:
                  print("Add New Word")
                  word = input("Word: ")
                  mean = input("Mean: ")
                  file.write(word.lower() + " -- " + mean.lower() + "\n")
            elif numbers == 2:
                  print("Search Word")
                  word = input("Word kiriting: ")
                  file.seek(0)
                  for line in file:
                        if word.lower() in line:
                              print(line)
            elif numbers == 3:
                  print("Update Word")
                  word = input("Word kiriting: ")
                  file.seek(0)
                  for line in file:
                        if word.capitalize() in line:
                              print(line)
                              mean = input("Mean: ")
                              file.seek(0)
                              file.write("\n" + word.capitalize() + " -- " + mean.capitalize())
            elif numbers == 4:
                  print("List Word\n")
                  file.seek(0)
                  for line in file:
                        print(line, end="")
                  print()
            elif numbers == 5:
                  print("Exit")
                  break
