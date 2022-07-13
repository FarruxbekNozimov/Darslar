# 1 =======
"""
create database users_info;
"""
# 2 =======
"""
create table users (id int unsigned not null auto_increment primary key, first_name varchar(100), last_name varchar(100), login varchar(100), password varchar (100), age int, is_activ bool)
"""
# 3 =======
"""
insert into users(null, "Farruxbek", "Nozimov", "farrux777", "qwe123", 15, True);
insert into users values(null, "Alibek", "Bekov", "1234567", "123123", 21, False);
insert into users values(null, "Husan", "Hasanov", "123", "qwe", 34, True);
insert into users values(null, "Hasanov", "Husan", "1123", "qqwe", 36, False);
insert into users values(null, "G'ishmat", "Toshmatob", "111", "qqq", 90, True);
insert into users values(null, "Toshmatov", "Eshmatov", "22", "fff", 100, False);
insert into users values(null, "Husanov", "Husanov", "3333", "aaa", 300, True);
insert into users values(null, "Husanov", "Husanov", "111", "aaa", 300, True);
insert into users values(null, "Husan", "Eshmatov", "12311", "b4bb", 60, False);
insert into users values(null, "Husan", "Bibiyov", "381", "b457", 40, True);
select * from users;
"""
# 4 =======
"""
update users set login="hello" where id=4 or id=6;
"""
# 5 =======
"""
delete from users where first_name = "Husan";
"""
# 6 =======
"""
select * from users where age > 28;
"""
# 7 =======
"""
select * from users where is_activ=1;
"""
# 8 =======
"""
update users set login=first_name where id=5;
"""
# 9 =======
"""
delete from users;
"""
# 10 =======
"""
drop table users;
"""
# 11 =======
"""
drop database users_info;
"""


