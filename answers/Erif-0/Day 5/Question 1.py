print("30 DAYS of CODE")
print("DAY 5")
print("Question 1 ")

print('\n')

n = 50
def fibonacci(n):
    if n <= 1:
       return n
    else:
       return(fibonacci(n-1) + fibonacci(n-2))

for i in range(int(n)):
    print(fibonacci(i), end=' ')
    