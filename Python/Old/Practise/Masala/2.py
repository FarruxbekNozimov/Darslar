# 2. Funksiya parametri sifatida string va so'zlardan iborat list berilgan
# va sizning vazifangiz ushbu stringda listdagi so'zlar nechi marta takrorlan
# ganligini aniqlab, ma'lumotlarni dictionary ko'rinishida chiqaruvchi funksiya tuzing.

def popular_words(text, words):
      dict1 = dict()
      for i in words:
            dict1[i] = text.split().count(i)
      return dict1

print(popular_words('''When I was One I had just begun When I was Two I was nearly new''', ['I', 'was', 'three', 'near']))

