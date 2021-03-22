def rev(j):
    rev = 0
    while (j > 0):
        remainder = j % 10
        rev = (rev * 10) + remainder
        j = j // 10

    return rev


def emirp(j):
    if j <= 1:
        return False
    else:
        for i in range(2, rev(j)):
            if j % i == 0 or rev(j) % i == 0:
                print(j, "Is not emirp no.")
                break
            else:
                print(j, "Is emirp no.")
                break


j = int(input())
emirp(j)
