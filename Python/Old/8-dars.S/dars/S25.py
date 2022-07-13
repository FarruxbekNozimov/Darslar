def list_in_dict(a, b, c):
      list1 = []
      for i in range(len(a)):
            list1.append({a[i]: {b[i]: c[i]}})
      return list1

print(list_in_dict(['S001', 'S002', 'S003', 'S004'],['Adina Park', 'Leyton Marsh', 'Duncan Boyle', 'Saim Richards'],[85, 98, 89, 92]))


