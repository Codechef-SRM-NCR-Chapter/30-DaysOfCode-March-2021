#Day 7
# question2


def GoodTriplets(arr,a,b,c):
    count=0
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            for k in range(j+1,len(arr)):
                if abs(arr[i]-arr[j])<=a and abs(arr[j]-arr[k])<=b and abs(arr[i]-arr[k])<=c:
                    count+=1
    print (count)
print("Enter the no")
n=int(input())
print("Enter the element")
arr=[]
for i in range(0,n,1):
    e=int(input())
    arr.append(e)
print("Enter value 'A'")
a=int(input())
print("Enter value 'B'")
b=int(input())
print("Enter Value 'C'")
c=int(input())
print("Output:")
GoodTriplets(arr,a,b,c)
