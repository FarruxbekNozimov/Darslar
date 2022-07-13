son = [3, 4, 0, 0, 0, 6, 2, 0, 6, 7, 6, 0, 0, 0, 9, 10, 7, 4, 4, 5, 3, 0, 0, 2, 9 , 7, 1]

for i in range(len(son)):
    if son[i] == 0:
        son.append(son[i])
        son.remove(son[i])
print(son)