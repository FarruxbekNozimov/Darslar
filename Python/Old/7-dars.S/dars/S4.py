def Is_kop(x):
      if type(x) == tuple or type(x) == list or type(x) == set or type(x) == dict:
            return True
      else:
            return False
print(Is_kop())