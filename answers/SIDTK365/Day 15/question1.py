def helper(s,start,end):
    if(start==end):
        return s[end]

    temp = helper(s,start+1,end)
    return temp + " " + s[start]

test = input()
s = test.split()
ans = helper(s,0,len(s)-1)
print(ans)
