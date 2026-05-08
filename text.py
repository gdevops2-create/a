file=None
while True:
    print("1,2,3,4,5")
    ch=int(input("Enter choice"))

    try:
        if ch==1:
            name=input("enter file name")
            file=open(name,'w+')
        elif ch==2:
            name=input("enter file name")
            text=input("enter text")
            file=open(name,'w+')
            file.write(text,'w+')
        elif ch==3:
            name=input("enter file name")
            file=open(name,'w+')
        elif ch==4:
            name=input("enter file name")
            file=open(name,'w+')

        
    
    except FileNotFoundError:
        print("file not found")
    except Exception as e:
        print("exception error")

    except IOError:
        print("io error")