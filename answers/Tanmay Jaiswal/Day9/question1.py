arr = list(map(int, input("Nums(Kindly, give space after each number): ").split()))
target=int(input("Target: "))
    
l=len(arr)
out=[]
for i in range(l):
    for j in range(i+1,l):
        if arr[i]+arr[j] == target:
            out= [i,j]
            print("Output:",out)
