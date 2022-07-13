numbers = input("Enter a number: ").split()
for i in numbers:
    if int(i[0]) % 2 == 0:
        print(i)
