while True:
    password = input("Parolni kiriting: ")
    if len(password) <= 8 or password.isalnum() or password.islower():
        continue
    print("To'g'ri kiritildi")
    break