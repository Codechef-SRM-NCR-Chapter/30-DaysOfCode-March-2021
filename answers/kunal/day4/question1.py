def main():
    n=int(input("Enter number: "))
    l=[]

    for i in range(2,(n//2)):
        for j in range(2, i):
            if i%j==0:
                continue
        else:
            if n%i==0:
                while n%i==0:
                    l.append(i)
                    n=n//i
            else:
                continue

    for i in range(len(l)):
        if i!=(len(l)-1):
            print(l[i], end= " , ")
        else:
            print(l[len(l)-1])
        
main()
                    
                
                
            
