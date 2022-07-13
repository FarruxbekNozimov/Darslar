with open('FILES/myFILE.txt', 'r') as f:
    text = f.read().split('\n')[1:]
    lst = []
    for line in text:
        line = line.split(',')
        dict1 = {
            'id': line[0],
            'first_name': line[1],
            'last_name': line[2],
            'email': line[3],
            'date': line[4],
            'profession': line[5],
        }
        lst.append(dict1)
    with open('FILES/dev.txt', 'w') as f:
        for i in lst:
            if i['profession'] == 'developer':
                f.write(f'{i["id"]},{i["first_name"]},{i["last_name"]},{i["email"]},{i["date"]},{i["profession"]}\n')

"""
    print(sorted(lst, key=lambda x: x['date'][3:]))
"""













