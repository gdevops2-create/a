file = None

while True:

    print("\n1.Create File")
    print("2.Write File")
    print("3.Read File")
    print("4.Delete File")
    print("5.Exit")

    ch = int(input("Enter choice : "))

    try:

        # CREATE FILE
        if ch == 1:

            name = input("Enter file name : ")

            file = open(name, 'w')
            print("File created successfully")

            file.close()

        # WRITE FILE
        elif ch == 2:

            name = input("Enter file name : ")

            text = input("Enter text : ")

            file = open(name, 'a')

            file.write(text + "\n")

            print("Text written successfully")

            file.close()

        # READ FILE
        elif ch == 3:

            name = input("Enter file name : ")

            file = open(name, 'r')

            print("\nFile Content :\n")

            print(file.read())

            file.close()

        # DELETE FILE
        elif ch == 4:

            import os

            name = input("Enter file name : ")

            os.remove(name)

            print("File deleted successfully")

        # EXIT
        elif ch == 5:

            print("Program Ended")

            break

        else:

            print("Invalid Choice")

    except FileNotFoundError:

        print("File not found")

    except IOError:

        print("IO Error")

    except Exception as e:

        print("Exception Error :", e)
