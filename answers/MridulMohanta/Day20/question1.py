def removerep(n):
	prev_digit = n % 10
	pow = 10
	res = prev_digit
	while (n):
		curr_digit = n % 10

		if (curr_digit != prev_digit):
			res += curr_digit * pow
			prev_digit = curr_digit
			pow *= 10
		n = int(n / 10)
	
	return res

if __name__ == '__main__':
	n = int(input('Enter number: '))
	print(removerep(n))
