"""
with open('FILES/1.txt') as f:
    text = int(''.join(f.read()))
    print("Kun: ", text // 86400)
    print("Soat: ", text // 3600 % 24)
    print("Minut: ", text // 60 % 60)
    print("Sekund: ", text % 60)
"""
"""
text = input("Text: ")
ch1, ch2 = input("A: "), input("B: ")
print(text[text.index(ch1):text.index(ch2) + 1])
"""
"""
word = input("Word: ")
letter = input("Letter: ")
print(word.find(letter, word.find(letter) + 1))
"""
"""
in_lst = input("List: ").split()
a = []
for i in in_lst:
    a.append(in_lst.count(i))
print("Eng ko'p uchraydigan so'z:", in_lst[a.index(max(a))])
print("Eng uzun so'z:", max(in_lst))
"""
with open('FILES/Jami.txt') as file1:
    text = file1.read().split()
    with open('FILES/Aharf.txt', 'w') as f1, open('FILES/Kharf.txt', 'w') as f2:
        for i in text:
            if 'a' in i.lower():
                f1.write(i + ' ')
            if 'k' in i.lower():
                f2.write(i + ' ')














