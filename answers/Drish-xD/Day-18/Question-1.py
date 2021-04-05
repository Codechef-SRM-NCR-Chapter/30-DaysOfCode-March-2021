# Program to count the number of integers less than N in sample space of perfect square :)


def perfect_sq(N):
    count = 0

    for i in range(N):
        for j in range(1, N):
            if j * j == i:
                count += 1

    return count


n = int(input("Enter the number :"))
print(perfect_sq(n))