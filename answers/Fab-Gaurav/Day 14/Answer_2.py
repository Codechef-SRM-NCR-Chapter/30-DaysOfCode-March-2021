def add(arr_1 ,arr_2,i=0):
    if i<len(arr_1 ):
        return [arr_1 [i] + arr_2[i]] + add(arr_1 ,arr_2,i+1)
    return[]

arr_1 =[int(x) for x in input('Enter the elements of array 1 : ').split()]
arr_2=[int(x) for x in input('Enter the elements of array 2 : ').split()]

l=len(arr_1 )-len(arr_2)
if l>0:
    arr_2+=[0]*l
else:
    arr_1 +=[0]*abs(l)
print('Sum of the arrays : ',add(arr_1 ,arr_2))