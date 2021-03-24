def Target(nums,index):
    target=[]
    for i in range(len(index)):
        target.insert(index[i],nums[i])
    return target
nums=list(map(int,input("Nums : ").split()))
index=list(map(int,input("Index : ").split()))
Target(nums,index)
