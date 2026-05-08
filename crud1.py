import mysql.connector

conn = mysql.connector.connect(
    host="localhost",
    user="root",
    password="yourpassword",
    database="studentdb"
)

cursor = conn.cursor()

cursor.execute("create table if not exists students(id int, name varchar(100), cgp int)")


while True:

    print("1:insert")
    print("2:view")
    print("3:update")
    print("4:delete")
    print("5:exit")

    ch = int(input("Enter your choice :"))

    if ch == 1:

        id = int(input("Enter your id :"))
        name = input("Enter your name :")
        cgp = int(input("Enter your cgp :"))

        cursor.execute(
            "insert into students values(%s,%s,%s)",
            (id, name, cgp)
        )

        conn.commit()

    elif ch == 2:

        cursor.execute("select * from students")

        for i in cursor.fetchall():
            print(i)

    elif ch == 3:

        id = int(input("Enter your id to update :"))
        cgp = int(input("Enter new cgp :"))

        cursor.execute(
            "update students set cgp=%s where id=%s",
            (cgp, id)
        )

        conn.commit()

    elif ch == 4:

        id = int(input("Enter your id to delete :"))

        cursor.execute(
            "delete from students where id=%s",
            (id,)
        )

        conn.commit()

    else:
        break


conn.close()

# pip install mysql-connector-python
# create database studentdb;