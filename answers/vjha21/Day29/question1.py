""" To determine if one can rearrange the elements of b so that ai + bi <= x holds for each i (1<=i<=n) """


def check(a, b, x):
    set_a = a
    set_b = b[::-1]
    condition = True
    for i in range(0, len(set_a)):
        if set_a[i] + set_b[i] <= x:
            condition = True
        else:
            condition = False
            break
    return condition


if __name__ == "__main__":
    """a = [1, 2, 3, 4]
    b = [1, 2, 3, 4]
    x = 4"""
    """ a = [1, 4]
    b = [2, 5]
    x = 6 """
    test_case = input("Enter number of test cases : ")
    while test_case != 0:
        l_x = input("Enter the length and X : ")
        l, x = l_x.split()
        a = list(map(int, input("Enter the array a elements : ").strip().split()))[
            : int(l)
        ]
        b = list(map(int, input("Enter the array b elements : ").strip().split()))[
            : int(l)
        ]

        if check(a, b, int(x)):
            print("YES")
        else:
            print("NO")
