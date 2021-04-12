def min_step(x , y , n):
    ans=0
    for i in range (n):
        ans+=(abs(x-i)+abs(n-0))
    return ans
n=int(input('enter number'))
x=int(input('enter no.'))
y=0
print(min_step(x , y , n))
    
