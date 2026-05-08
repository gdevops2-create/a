import sqlite3

conn=sqlite3.connect("db.db")
cursor=conn.cursor()

cursor.execute("create table if not exists students(id int,name varchar, cgp int)")


while True:
    print("1:insert")
    print("2:insert")
    print("3:update")
    print("4:delete")
    print("5:exit")
    
    ch=int(input("Enter your choice :"))

    if ch==1:
        id=int(input("Enter your id :"))
        name=str(input("Enter your name :"))
        cgp=int(input("Enter your cgp :"))
        cursor.execute("insert into students values(?,?,?)",(id,name, cgp))
    elif ch==2:

        for i in cursor.execute("select * from students"):
            print(i)

    elif ch==3:
        id=int(input("Enter your id to update:"))
        name=str(input("Enter your name :"))
        cgp=int(input("Enter your cgp :"))
        cursor.execute("update students set cgp=? where id=?",( cgp,id))
    
    elif ch==4:
        id=int(input("Enter your id to delete:"))
       
        cursor.execute("delete from students where id=?",( id,))

    else :
        conn.commit()
        break



conn.close()