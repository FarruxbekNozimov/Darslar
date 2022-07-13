with open('FILES/Phone.txt', 'r') as f:
    # 1 - masala
    """print(set(i[5:7] for i in f))"""
    # 2 - masala
    text = f.read().split('\n')
    for i in range(len(text)):
        test = list(text[i][8:])
        if len(set(test)) == len(test)-1:
            print(test)