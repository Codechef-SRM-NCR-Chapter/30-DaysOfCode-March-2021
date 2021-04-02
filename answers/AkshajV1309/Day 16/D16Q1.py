def trans(o,beg,end):
    if end>=beg:
        mid=beg+(end-beg)//2
        if((mid==end or o[mid+1]==0)and(o[mid]==1)): 
            return mid+1
        if o[mid]==1:
            return trans(o,(mid+1),end)
        return trans(o,beg,mid-1)
    else:
        return 0
o=[int(x) for x in input('Enter NUMS seprated by space: ').split()]
print('No. 1s=',trans(o,0,len(o)-1))
