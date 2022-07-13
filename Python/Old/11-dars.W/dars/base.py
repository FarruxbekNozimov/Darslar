def connect_db(db_name):
    import mysql.connector
    mydb = mysql.connector.connect(
        host="localhost",
        user="root",
        passwd="1111",
        database=db_name
    )
    return mydb


def show_tables(name, cursor):
    cursor.execute("SHOW TABLES")
    values = cursor.fetchall()
    values = [value[0] for value in values]
    values.insert(0, name)
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
