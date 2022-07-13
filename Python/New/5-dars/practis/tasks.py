# Task 3

from calendar import c


class Calculator:
    def add(a, b):
        return a + b
    
    def sub(a, b):
        return a-b

    def mul(a, b):
        return a*b

    def div(a, b):
        return a/b

    def factorial(a):
        factorial = 0
        for i in range(1,a + 1):
            factorial *= i
        return factorial

print(Calculator.add(2, 3))
print(Calculator.sub(2, 3))
print(Calculator.mul(2, 3))
print(Calculator.div(2, 3))
print(Calculator.factorial(4))







