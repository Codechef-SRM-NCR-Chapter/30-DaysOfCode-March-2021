
def find_Transition_Point(arr, n):
	for i in range(n):
		if(arr[i] == 1):
			return i
	return -1

arr = list(map(int,input('enter NUMS WITH SPACE').split()))
n = len(arr)

point = find_Transition_Point(arr, n)

if point >= 0:
	print("Transition point is", point)
else:
	print("There is no transition point")
