# 1 - usul
'''
def tublar(x):
      for i in range(2, x//2+1):
            if x % i == 0:
                  return False
      return True
'''
# 2 - usul
a = 10
print(list(filter(lambda x: all(x % i for i in range(2, x)), range(2, a))))