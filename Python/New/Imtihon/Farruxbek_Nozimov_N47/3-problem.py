# Bismillahir Rohmanir Rohim
with open('FILES/Jami.txt') as file1:
    text = file1.read().split()
    with open('FILES/Aharf.txt', 'w') as f1, open('FILES/Kharf.txt', 'w') as f2:
        for i in text:
            if 'f' in i.lower():
                f1.write(i + ' ')
            if 'm' in i.lower():
                f2.write(i + ' ')

