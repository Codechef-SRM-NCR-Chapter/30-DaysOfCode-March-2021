# Program to add each elements one by one of 2 arrays and make a new array using recursion :)


result = []


def array_add(arry1, arry2, i=0):
    global result
    l1 = len(arry1)
    l2 = len(arry2)

    while i < l1 and i < l2:
        add = arry1[i] + arry2[i]
        result.append(add)
        return array_add(arry1, arry2, i + 1)

    while i < l1:
        result.append(arry1[i])
        i += 1

    while i < l2:
        result.append(arry2[i])
        i += 1
    return result


a = list(map(int, input("Enter the elements of first list *with space b/w the numbers* : ").split()))
b = list(map(int, input("Enter the elements of second list *with space b/w the numbers* : ").split()))
print(array_add(a, b))
