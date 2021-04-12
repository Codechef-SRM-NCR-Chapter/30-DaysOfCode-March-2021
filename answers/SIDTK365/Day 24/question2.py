def helper(lst):
    ans = 0 #This is our final answer
    while 1:
        zeros = 0 #Counting the number of zeroes in our array
        i = 0
        while i < len(lst):
            if(lst[i]&1):
                break
            elif(lst[i]==0):
                zeros+=1
            i+=1
        if(zeros==len(lst)):  #If the number of traversals is equal to the number of zeroes i.e. = n then all the elements of the array are zeroes therefore return the answer
            return ans
        if(i==len(lst)):      #Else if all the elements are even then divide the elements by 2
            for j in range(0,len(lst)):
                lst[j] = lst[j]//2
            ans+=1
        for j in range(i,len(lst)): # If the elements are not even then decrement their value by 1
            if(lst[j] & 1):
                lst[j]-=1
                ans+=1

lst = list(map(int, input().split()))
print(helper(lst))
