print("Enter the dimensions of the matrix \n")
m=int(input())
n=int(input())
def count(a,b):
    if a==1 or b==1 :
        return 1
    else:
        return count(a-1,b)+count(a,b-1)

print(count(m,n))
