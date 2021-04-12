def to_string(List):
	return ''.join(List)

def different_str(a, l, r):
	if l==r:
		print (to_string(a))
	else:
		for i in range(l,r+1):
			a[l], a[i] = a[i], a[l]
			different_str(a, l+1, r)
			a[l], a[i] = a[i], a[l] 

string = input('entr str')
n = len(string)
a = list(string)
different_str(a, 0, n-1)
