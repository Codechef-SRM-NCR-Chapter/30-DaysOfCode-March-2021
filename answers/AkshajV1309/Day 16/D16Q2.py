def trans(o,beg,end):
    if end>=beg:
        mid=beg+(end-beg)//2
        if((mid==end or o[mid+1]==1)and(o[mid]==0)): 
            return mid+1
        if o[mid]==0:
            return trans(o,(mid+1),end)
        return trans(o,beg,mid-1)
o=[int(x) for x in input('Enter NUMS seprated by space: ').split()]
print('No transition point') if o[0]==1 or o[len(o)-1]==0 else print('Transition point at:',trans(o,0,len(o)-1))
