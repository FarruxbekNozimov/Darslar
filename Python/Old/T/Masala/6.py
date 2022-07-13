def yigindi_darajasi(dan, gacha, daraja):
      list1 = [*range(dan, gacha+1)]
      list2 = [i**daraja for i in list1]
      return sum(list1)**daraja - sum(list2)

print(yigindi_darajasi(1, 100, 2))
