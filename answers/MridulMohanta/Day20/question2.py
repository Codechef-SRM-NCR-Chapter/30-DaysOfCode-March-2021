def brac_balance(inp):
	stack = []
	for char in inp:
		if char in ["(", "{", "["]:
			stack.append(char)
		else:
			if not stack:
				return False
			current_char = stack.pop()
			if current_char == '(':
				if char != ")":
					return False
			if current_char == '{':
				if char != "}":
					return False
			if current_char == '[':
				if char != "]":
					return False
	if stack:
		return False
	return True
if 	__name__ == "__main__":
	inp = input("Enter pattern: ")
	if brac_balance(inp):
		print("TRUE")
	else:
		print('FALSE')
