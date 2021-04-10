def print_rev(strr):
	strr = strr.split(" ")
	st = []
	for i in strr:
		st.append(i)
	while len(st) > 0:
		print(st[-1], end = " ")
		del st[-1]

if __name__ == '__main__':
		strr =input('enter string or words')
    print_rev(strr)
