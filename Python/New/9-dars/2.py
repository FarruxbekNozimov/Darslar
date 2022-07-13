
list_ = input('=> ').split()
if list_[0].isdigit():
    list_[0] = int(list_[0])
elif list_[1].isdigit():
    list_[1] = int(list_[1])
print(list_[0] * list_[1])

"""

SELECT DISTINCT id +1 FROM talaba WHERE id + 1 NOT IN (SELECT DISTINCT id FROM talaba);
S
"""

