# 1 - masala
"""
with open('FILES/Karta.txt') as file:
    text = file.read().split('\n')[1:]
    dict1 = {}
    for line in text:
        line = line.split(',')
        dict1[line[-1]] = line[0]
    print(dict1)
"""
# 2 - masala
"""
with open('FILES/Karta.txt') as file1:
    text1 = file1.read().split('\n')[1:]
    list1 = []
    for line in text1:
        line = line.split(',')
        if "visa" in line[1]:
            list1.append(line[0])
    print(sorted(list1))
"""
# 3 - masala
"""
with open('FILES/Karta.txt') as file1:
    text1 = file1.read().split('\n')[1:]
    num = "0123456789"
    for line in text1:
        for i in num:
            if i in line:
                line = line.split(',')
                print(line[0], line[2], line[3])
"""