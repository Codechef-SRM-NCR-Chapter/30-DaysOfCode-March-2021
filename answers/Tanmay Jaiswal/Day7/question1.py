print("Input:")
def createTargetArray(nums,index):
        target = []
        for i in range(len(index)):
            target.insert(index[i], nums[i])
        return target

nums = list(map(int, input("Nums(kindly, provide space after each digit): ").split()))
index = list(map(int, input("Index(kindly, provide space after each digit): ").split()))

print("\nOutput:\t",createTargetArray(nums,index))
