def Show_Inf(information):
    information = information.split(',')
    dict1 = {
        "id": information[0],
        "firstname": information[1],
        "lastname": information[2],
        "email": information[3],
        "city": information[4],
    }
    return dict1
with open('Inf.txt') as file:
    masala = file.read().split('\n')[1:]
    list1 = list(map(Show_Inf, masala))
    for i in list1:
        print(i['firstname'], i['lastname'], i['email'])


