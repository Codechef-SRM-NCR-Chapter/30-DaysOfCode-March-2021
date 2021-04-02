def binary_search(lst,low,high):
    if high>=low:
        mid = low + (high-low)//2

        if((mid == high or lst[mid+1]==1)and(lst[mid]==0)): # Condition when we find the last occurence of 0 
            return mid+1

        if lst[mid]==0:
            return binary_search(lst,(mid+1),high)
        
        return binary_search(lst,low,mid-1)


lst = list(map(int, input().split()))
result = binary_search(lst,0,len(lst)-1)
print(result)

# Same as prev question
