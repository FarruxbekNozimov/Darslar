def fact_list(lst):
    list1 = []
    if len(lst) == 1:
        return [lst]
    for i in range(len(lst)):
        m = lst[i]
        remLst = lst[:i] + lst[i+1:]
        for p in fact_list(remLst):
            list1.append([m] + p)
    return list1


print(fact_list([4, 3, 2, 1]))