"""
def method1(text):
    for i in text:
        if "videokarta" in i.lower():
            print(i)


def method2(text):
    for i in text:
        if i[0].lower() == 'a':
            print(i)


with open('FILES/3.txt') as f:
    text = f.read().split('\n')[1:]
    method1(text)
    method2(text)
"""
"""
dict1 = {1: 'salom', 2:123, 3: 'hayr', 4:456, 5: 'alvido'}
lst = []
for i in dict1:
    if type(dict1[i]) == str:
        lst.append(dict1[i])
lst.sort()
for i in lst:
    for j in dict1:
        if i == dict1[j]:
            print(j, i)
"""
"""
def count_digits(something):
    count = 0
    for i in something:
        if i.isdigit():
            count += 1
    return count
print(count_digits('my numbers is 2'))
"""
word = input("Word: ")
A = input("A: ")
B = input("B: ")

print(word[word.find(A)+1:] + word[:word.find(B)])







