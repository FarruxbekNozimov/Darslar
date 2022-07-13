def sonmi(son):
      if son[0] == '-':
            son = son[1:]
      if son[0] == "." or son[-1] == "." or son.count(".") > 1:
            return False
      if son.replace(".", "").isdigit():
            return True
      return False

son = input("Son kiriting >> ")

if sonmi(son):
      print("Son")
else:
      print("Son emas")


