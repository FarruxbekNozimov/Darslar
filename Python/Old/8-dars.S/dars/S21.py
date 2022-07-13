dict1 = {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}

dict1.pop(max(dict1, key=lambda k: dict1[k]))
dict1.pop(min(dict1, key=lambda k: dict1[k]))

print(dict1)
