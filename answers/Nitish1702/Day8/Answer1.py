from collections import Counter                                                                                                                                                                                                                                                   

c = Counter(list(map(lambda x: int(x),input().split(","))))    
print([i for i,j in c.items() if j==1])
