input_string = input()
stack = []
for char in input_string:
    stack.append(char)

output_string = ""
while len(stack)>0:
    top_char = stack.pop()
    output_string+=top_char
    # stack.pop()
print(output_string)
