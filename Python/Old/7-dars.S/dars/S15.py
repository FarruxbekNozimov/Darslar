# 1 - usul
'''
def is_prime(x):
      for i in range(2, x):
            if x % i == 0:
                  return False
      return True
'''
# 2 - usul
is_prime = lambda x: x > 1 and all(x % i for i in range(2, x))

ages = [5, 12, 17, 18, 24, 32, 19, 0, 21]
print(list(filter(is_prime, ages)))