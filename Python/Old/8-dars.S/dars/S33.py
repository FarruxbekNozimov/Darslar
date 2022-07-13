def intWord(num):
      d = {1: 'bir', 2: 'ikki', 3: 'uch', 4: "to'rt", 5: 'besh', 6: 'olti', 7: 'yetti', 8: 'sakkiz', 9: "to'qqiz", 10: "o'n",
           20: 'yigirma', 30: "o'ttiz", 40: 'qirq', 50: 'ellik', 60: 'oltmish', 70: 'yetmish', 80: 'sakson', 90: "to'qson"}
      ming, million, milliard = 1000, 1000000, 1000000000
      if num < 10:
            return d[num]
      elif num < 100:
            return d[num] if num % 10 == 0 else d[num // 10 * 10] + ' ' + d[num % 10]
      elif num < ming:
            return d[num // 100] + ' yuz ' if num % 100 == 0 else d[num // 100] + ' yuz ' + intWord(num % 100)
      elif num < million:
            return intWord(num // ming) + ' ming' if num % ming == 0 else intWord(num // ming) + ' ming ' + intWord(num % ming)
      elif num < milliard:
            return intWord(num // ming) + ' million ' if num % ming == 0 else intWord(num // ming) + ' million  ' + intWord(num % ming)

print(intWord(int(input('=> '))))

