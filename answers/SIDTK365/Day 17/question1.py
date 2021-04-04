def helper(lst,n,k):
    ans = []
    for i in range(0,n):
        for j in range(i+1,n):
            target_2 = k - lst[j] - lst[i]
            front = j+1
            back = n-1

            while(front < back):
                two_sum = lst[front]+lst[back]
                if(two_sum < target_2):
                    front+=1
                elif(two_sum > target_2):
                    back-=1
                else:
                    tuple_temp = (lst[i],lst[j],lst[front],lst[back])
                    ans.append(tuple_temp)
                    temp_1 = lst[front]
                    temp_2 = lst[back]

                    while(front < back and lst[front]==temp_1):
                        front+=1
                    while(front < back and lst[back] == temp_2):
                        back-=1
    return ans



n = int(input())
k = int(input())
lst = list(map(int, input().split()))
lst.sort()
print(helper(lst,n,k))
