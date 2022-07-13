son = [1, 2, 0, 0, 4, 6, 4, 0, 3]
for i in range(len(son)):
    if son[i] == 0:
        son.remove(son[i])
        son.append(son[i])
print(son)