def factor_list(nums):
    nums = sorted(nums)
    print(nums)
    new = []
    index_list1 = [-1]
    new_list1 = []
    while len(index_list1):
        index = index_list1.pop()
        index += 1
        while index < len(nums):
            if nums[index] not in new:
                break
            index += 1
        else:
            if len(new):
                new.pop()
            continue

        index_list1.append(index)
        index_list1.append(-1)
        new.append(nums[index])
        if len(new) == len(nums):
            new_list1.append(list(new))
    return new_list1


print(factor_list([3, 3, 1]))