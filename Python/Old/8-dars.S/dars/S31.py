def nested_dict(list1):
      dict1 = {}
      for i in range(len(list1)):
            dict1[list1[i][0]] = list1[1:]
      return dict1

list1 = [
     [1, 'Jean Castro', 'V'],
     [2, 'Lula Powell', 'V'],
     [3, 'Brian Howell', 'VI'],
     [4, 'Lynne Foster', 'VI'],
     [5, 'Zachary Simon', 'VII']
]

print(nested_dict(list1))