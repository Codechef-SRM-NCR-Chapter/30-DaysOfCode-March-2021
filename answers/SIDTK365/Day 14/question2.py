lst = []

def helper(lst1,lst2):
    if(len(lst1)==0 and len(lst2)==0):
        return
    
    temp = 0
    if(len(lst1)>0):
        temp+=lst1[0]
    if(len(lst2)>0):
        temp+=lst2[0]

    lst.append(temp)
    helper(lst1[1:],lst2[1:])

lst1 = list(map(int, input().split()))
lst2 = list(map(int, input().split()))
helper(lst1,lst2)
print(lst)
