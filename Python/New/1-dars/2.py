with open('FILES/Names.txt') as file:
    text = file.readlines()
    text = [i.split()[::-1] for i in text]
    text.sort()
    [print(' '.join(i[::-1])) for i in text]