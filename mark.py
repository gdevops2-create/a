marks=[]
n=int(input("Enter the no of students :"))
for i in range(n):
    mark1=int(input("Enter the mark1: "))
    mark2=int(input("Enter the mark2: "))
    total=mark1+mark2
    avg=total/2 
    marks.append([mark1,mark2,avg,total])

for i in range(n):
    print("studnet details of ",n)
    print("m1:",marks[i][0])
    print("m1:",marks[i][1])
    print("m1:",marks[i][2])
    print("m1:",marks[i][3])
    