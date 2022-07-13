
f0, f1 = 1, 2
jami = 0
while f0 < 4000000:
      if f0 % 2 == 0:
            jami += f0
      f0, f1 = f1, f0 + f1
print(jami)

