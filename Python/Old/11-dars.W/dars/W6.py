import mysql.connectormydb = mysql.connector.connect(    host="localhost",    user="root",    passwd="root",    database="my_bases")cursor = mydb.cursor()try:    cursor.execute("create table users1 (id int not null auto_increment primary key, first_name varchar(255), "                   "last_name varchar(255), login varchar(255), password varchar(255), age int, "                   "is_active bool)")except:    print("Bu Table bor")