import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="root",
    database="my_bases"
)
cursor = mydb.cursor()
# cursor.execute("CREATE TABLE reviewer (rev_id INT, rev_name TEXT)")
# lst = [(1, 'Mike Salvati'),(15, 'Flagrant Baronessa'),(21, 'Jack Malvern'),(16, 'Victor Woeltjen'),(17, 'Farruxbek')]
# cursor.executemany(f"INSERT INTO reviewer VALUES (%s, %s)", lst)
mydb.commit()
mydb.close()