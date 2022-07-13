# 1 - masala
'''print(list(map(int, input("=> ").split())))'''

# 2 - masala
'''
numbers = map(int,input("=> ").split())

def is_prime(n):
      for i in range(2, n):
            if n % i == 0:
                  return False
      return True

print(list(map(is_prime, numbers)))
'''
# 3 - masala
'''
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
numbers1 = [5, 6, 7, 8, 9, 10, 1, 2, 3, 4]
print(list(map(lambda x, y: x**y, numbers, numbers1)))
'''
# 4 - masala
'''
numbers = [-1, 2, -3, 4, -5, 6, -7, 8, -9, 10]
print(list(filter(lambda x: x > 0 and x % 2 == 0, numbers)))
'''