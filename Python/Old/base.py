import mysql.connector
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="1111",
    database="mybase"
)

def show_tables():
    mycursor.execute("SHOW TABLES")
    values = mycursor.fetchall()
    values = [value[0] for value in values]
    values.insert(0, "Tables_in_mybase")
    length = max([len(value) for value in values]) + 4
    for i in range(len(values)):
        values[i] = " " + values[i] + " " * (length - 3 - len(values[i]))
    a, b = 0, 0
    for i in range(len(values) + 3):
        for j in range(length):
            if i == 0 or i == 2 or i == len(values) + 2:
                if j == 0 or j == length - 1:
                    print("+", end="")
                else:
                    print("-", end="")
            elif j == 0 or j == length - 1:
                print("|", end="")
            else:
                if a == 0:
                    print(values[b], end="")
                    a = 1
                    b += 1
        a = 0
        print()


def select_from():
    pass


mycursor = mydb.cursor()
try:
    mycursor.execute("CREATE TABLE users (name VARCHAR(255), address VARCHAR(255))")
except:
    print("Bu table oldin ochilgan")

show_tables()
