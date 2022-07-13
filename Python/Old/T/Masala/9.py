# A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
# a2 + b2 = c2
# For example, 32 + 42 = 9 + 16 = 25 = 52.
# There exists exactly one Pythagorean triplet for which a + b + c = 1000.
# Find the product abc.

def songacha(son):
      for a in range(son):
            for b in range(son):
                  for c in range(son):
                        if a**2 + b**2 == c** 2 and a + b + c == son:
                              return a*b*c

print(songacha(1000))