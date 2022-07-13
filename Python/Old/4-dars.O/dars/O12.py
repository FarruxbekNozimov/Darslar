nums =[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
i = 0
nums = [[nums[i][j]**2 if j%2 else nums[i][j] for i in range(len(nums))] for j in range(len(nums[i]))]
print(nums)

