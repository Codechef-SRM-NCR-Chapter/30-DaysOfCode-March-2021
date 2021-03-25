n=list(map(lambda x:int(x),input('NUMS=').strip('[]').split(',')))
t=int(input("Target="))
for i in range(len(n)):
    for j in range(i,len(n)-1):
        if n[i]+n[j+1]==t:
            print([i,j+1])
            break
