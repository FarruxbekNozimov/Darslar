# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
# What is the 10 001st prime number?

def nchi_prime(n):
      nchi_tub_son = 0
      for i in range(2, n):
            a = 0
            for j in range(2, i):
                  if i % j == 0:
                        a = 1
                        break
            if a == 0:
                  nchi_tub_son = i
      return nchi_tub_son

print(nchi_prime(10001))