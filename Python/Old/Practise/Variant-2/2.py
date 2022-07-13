# 2.	Funksiya parametri sifatida sonlardan iborat list berilgan va
# ushbu listda faqat takrorlanadigan sonlarni saqlab, qolgan
# sonlarni o'chiruvchi funksiya tuzing

def takrorlan(list1):
    for i in list1:
        if i % 2 == 0:
            list1.remove(i)


print(takrorlan([1, 2, 3, 4, 5]))

