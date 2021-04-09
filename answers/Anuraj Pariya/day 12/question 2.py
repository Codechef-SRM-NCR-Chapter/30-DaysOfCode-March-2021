def countSubStr(st, n) :
    res=0
    for i in range(0, n) :
        if (st[i] == '1') :
            for j in range(i+1, n) :
                if (st[j] == '1') :
                    res = res + 1
    return res

st = '01101'
list(st)
n= len(st)
print(countSubStr(st, n), end=" ")
