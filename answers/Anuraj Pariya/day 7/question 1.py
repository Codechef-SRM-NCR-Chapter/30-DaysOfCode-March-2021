def createTargetArray(self, nums: list[int], index: list[int]) -> list[int]:
    hashmap = {}
    for i in range(len(nums)):
        if index[i] < i:
            self.move_right_index(hashmap, i, index)
        hashmap[index[i]] = nums[i]
        
    return [item[1] for item in sorted(hashmap.items())]
    
def move_right_index(self, hashmap: {}, i: int, index: List[int]):
    for j in range(i, index[i], -1):
        hashmap[j] = hashmap.get(j - 1) 
