def main():
    n=int(input("Enter no of terms: "))
    result=0
    for i in range(1,n+1):
        s=""
        for j in range(1, i+1):
            s=s+str(j)
        result=result+int(s)
    print("sum:",result)

main()
