lst = [1, 2, 3]


def fact(son):
    if son == 0:
        return 1
    return son * fact(son - 1)


def sample(list1):
    lst1 = []
    last_index = len(list1) - 1
    while last_index > 0:
        rand_index = set(map(str, range(len(list1)))).pop()
        rand_index = int(rand_index) - 2
        temp = list1[rand_index]
        list1[rand_index] = list1[last_index]
        list1[last_index] = temp
        last_index -= 1
    return list1


def rand_fact(lst1):
    lst1_rand = []
    while True:
        a = sample(lst1)
        b = a[::-1]
        if a not in lst1_rand:
            lst1_rand.append(a)
        if b not in lst1_rand:
            lst1_rand.append(b)
        if len(lst1_rand) == fact(len(lst1)):
            return lst1_rand


print(rand_fact(lst))