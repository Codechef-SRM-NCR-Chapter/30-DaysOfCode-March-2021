def helper(lst,s,e):
    if(s >= e):
        return True
    

    if(lst[s]==lst[e]):
        return helper(lst,s+1,e-1)
    else:
        return False

lst = list(map(int, input().split()))
ans = helper(lst,0,len(lst)-1)
if(ans==True):
    print("Palindrome")
else:
    print("Not Palindrome")
