list1 = ["a", "b", ["c", ["d", "e", ["f", "g"], "k"], "l"], "n"]
list1[2][1][2].append("h")
list1[2][1][2].append("i")
list1[2][1][2].append("j")
print(list1)