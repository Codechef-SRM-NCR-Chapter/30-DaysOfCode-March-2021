def generate(n):
    first_term = 3
    result = [first_term]
    for x in range(2,n+1):
        result.append(result[-1] + (((x - 1)**2 + x)*3))
    return result

n = int(input('Enter no. of terms: '))
print(generate(n))