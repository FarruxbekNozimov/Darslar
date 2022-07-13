num = int(input("Enter a number: "))
# print(number[::-1])

reversed_num = 0
while num != 0:
    curr_digit = num % 10
    reversed_num = 10 * reversed_num
    reversed_num = reversed_num + curr_digit
    num = num // 10
print(str(reversed_num))
