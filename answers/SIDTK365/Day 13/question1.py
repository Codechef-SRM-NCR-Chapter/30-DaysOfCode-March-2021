def helper(number):
    if(number==0):
        return 0
    
    return (number%10) + helper(number//10)


number = int(input())
ans = helper(number)
print(ans)
