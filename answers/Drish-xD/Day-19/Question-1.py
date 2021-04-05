# Program to Find the duplicate and missing number from the array :)


def duplicate(arr):   # Function to find duplicate array
  global ans
  new_arr = []
  for i in arr:
    if i not in new_arr:
      new_arr.append(i)
    else:
      ans.append(i)   # appending duplicate digit
  return new_arr


def find_number(arr, n):    # Function to find the missing number
    global ans
    sum_array = n*(n+1) // 2    # Finding the missing number 
    mising_num = sum_array - sum(arr)
    ans.append(mising_num)    # Appending the missing number


ans = []
A = list(map(int, input("Enter the elements of list *with spaces b/w each element* :").split()))
f =  duplicate(A)
n = len(f)+1
find_number(f, n)
for j in ans:
  print(j, end=' ')
  