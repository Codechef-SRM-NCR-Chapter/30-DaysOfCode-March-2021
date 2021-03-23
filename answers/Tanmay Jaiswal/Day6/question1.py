#program to represent kids with the greatest number of candies with boolean value:

n1= int(input())
n2=int(input())

res = [int(x) for x in str(n1)]

ans=[]

print("CANDIES = ",res)
print("EXTRA-CANDIES = ",n2)

res.sort()
l=len(res)


for i in range(l):
    if(res[i]+n2>=res[-1]):
        ans.append(True)
    else:
        ans.append(False)
        
print(ans)
