import functools as ft
# 1 - masala
"""
lst1 = [True, False, "Hello", 3.2, 9, 2, 4.0, 5.9, 1]
lst1 = list(filter(lambda x: type(x) == int or type(x) == float, lst1))
print("Max: ", max(lst1), "\nMin: ", min(lst1))
"""
# 2 - masala
"""
list1 = []
while True:
    a = int(input(">>> "))
    if a == 0:
        break
    list1.append(a)
print("Max: ", max(list1), "\nMin: ", min(list1), "\nAvarage: ", sum(list1) / len(list1))
"""
# 3 - masala
"""
elist = ["Alaska", "Alabama", "Colorado", "Nevada"]
letter = input(">>> ").lower()
print(list(map(lambda x: x.lower().count(letter), elist)))
"""
# 4 - masala
"""
str1 = list(filter(lambda x: x.isdigit(), input(">>> ")))
str1 = list(map(lambda x: int(x), str1))
print("Sum: ", sum(str1), "\nAvarage: ", sum(str1) / len(str1))
"""
# 5 - masala
"""
sp_char = "!@#$%^&*()_+/\|}{][]?><,.';:~`"
input_str = input(">>> ")
for i in sp_char:
    input_str = input_str.replace(i, "#")
print(input_str)
"""
# 6 - masala
"""
def rec_sum(num):
    if num != 0:
        return num % 10 + rec_sum(num // 10)
    return 0
print(rec_sum(int(input(">>> "))))
"""
# 7 - masala
"""
mylist = ["olumide", "akinremi", "josiah", "temidayo", "omoseun", "amade"]
print(list(filter(lambda x: len(x) < 7, mylist)))
"""
# 8 - masala
"""
strs =  ["olumide", "akinremi", "josiah", "temidayo", "omoseun", "amade"]
strs = list(map(lambda x: len(x), strs))
print(ft.reduce(lambda x, y: x + y, strs))
"""
# 9 - masala
"""
3-dars Worker:
    def __init__(self, name, profession, salary):
        self.name = name
        self.profession = profession
        self.salary = salary
Akbar = Worker("Akbar", "Developer", 2500)
"""
# 10 - masala
"""
3-dars Teacher:
    def __init__(self, name, profession, salary, classes: list):
        self.name = name
        self.profession = profession
        self.salary = salary
        self.classes = classes
    def add_class(self, class_name):
        self.classes.append(class_name)
Jasur = Teacher("Jasur", "matematika ustoz", 1500, ["5-A", "6-B"])
Jasur.add_class("7-A")
print(Jasur.classes) # ["5-A", "6-B"]
"""
