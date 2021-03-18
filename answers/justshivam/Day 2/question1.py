num = input('Enter a number: ')

num_arr = [ch for ch in num]
sol = 0
for i in range(len(num_arr)):
    sol += int(num_arr[i])**(i+1)

if sol == int(num):
    print(f'{num} is a Desarium')
else:
    print(f'{num} is not a Desarium')