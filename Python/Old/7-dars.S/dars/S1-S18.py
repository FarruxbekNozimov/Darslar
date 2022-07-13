# S1
'''
juftmi = lambda son:True if son % 2 == 0 else False
print(juftmi(10))
'''
# S2
'''
manfiymi = lambda son:True if son < 0 else False
print(manfiymi(-10))
'''
# S3
'''
tubmi = lambda x: x > 1 and all(x % i for i in range(2, x))
print(tubmi(19))
'''
# S4
'''
qiymat_LTSDmi = lambda  son:True if type(son) == list or type(son) == tuple or type(son) == set or type(son) == dict else False
print(qiymat_LTSDmi("Salom"))
'''
# S5
'''
teskari_list = lambda list1:tuple(sorted(list1, reverse=True))
print(teskari_list([1, 2, 3, 4, 5]))
'''
# S6
'''
Per_Yuzi = lambda a, b:(2*(a+b), a*b)
print(Per_Yuzi(5, 6))
'''
# S7
'''
kvadrat = lambda son:son*son
print(kvadrat(10))
'''
# S8
'''
modul = lambda son:son*-1 if son < 0 else son
print(modul(-10))
'''
# S9
'''
katta_son = lambda a, b:a if a > b else b
print(katta_son(10, 8))
'''
# S10
'''
eng_katta_qiymat = lambda list1:max(list1)
print(eng_katta_qiymat([2, 4, 10, 9]))
'''
# S11
'''
daraja = lambda a, b:a**b
print(daraja(2, 4))
'''
# S12
'''
list_qil = lambda son:[input(f"{i+1} - son >>> ") for i in range(son)]
print(list_qil(5))
'''
# S13
'''
qosh = lambda first, second:[second[i] + str(first[i]) for i in range(len(first))]
print(qosh([1, 4, 3, 9], ['chelsea', 'real', 'barca', 'MU']))
'''
# S14
'''
oxirgi_index = lambda text, belgi:(len(text) - 1) - text[::-1].find(belgi)
print(oxirgi_index("Hello, welcome to my world", 'o'))
'''
# S15
'''
is_prime = lambda x: x > 1 and all(x % i for i in range(2, x))
print(list(filter(is_prime, [5, 12, 17, 18, 24, 32, 19, 0, 21])))
'''
# S16
'''
tublar = lambda x: all(x % i for i in range(2, x))
print(list(filter(tublar, range(2, 10))))
'''
# S17
katta_kichik_harf = lambda text:[sum(map(lambda str1:str1.isupper(), text)),sum(map(lambda str1:str1.islower(), text))]
print(katta_kichik_harf("Good Luck"))

# S18
'''
orasida_kvadrat = lambda a, b:[i * i for i in range(b) if a < i * i < b]
print(orasida_kvadrat(15, 40))
'''

