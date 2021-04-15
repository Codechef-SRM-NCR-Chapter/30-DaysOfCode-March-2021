""" To divide the numbers 1,2,...,n into two sets of equal sum """


def make_equal_set(N):
    # number_set = [i for i in range(1, N + 1)]
    possibility = True
    val = (N * (N + 1)) // 2
    # Base case
    if val & 1 or N <= 2:
        # print("-1")
        possibility = False

    set1 = []
    set2 = []

    if not (N & 1):  # Even case
        turn, start, last = 1, 1, N
        while start < last:
            if turn:
                set1.append(start)
                set1.append(last)
                turn = 0
            else:
                set2.append(start)
                set2.append(last)
                turn = 1
            start += 1
            last -= 1

    else:  # Odd case
        rem = val // 2
        vis = [False] * (N + 1)
        for i in range(1, N + 1):
            vis[i] = False
        vis[0] = True

        for i in range(N, 0, -1):
            if rem > i:
                set1.append(i)
                vis[i] = True
                rem -= i
            else:
                set1.append(rem)
                vis[rem] = True
                break
        for i in range(1, N + 1):
            if not vis[i]:
                set2.append(i)

    return possibility, set1, set2


if __name__ == "__main__":
    N = 7
    poss, s1, s2 = make_equal_set(N)
    if poss:
        print(
            f"The elements in set 1 are : {s1} and sum of its elements are : {sum(s1)}"
        )
        print(
            f"The elements in set 1 are : {s2} and sum of its elements are : {sum(s2)}"
        )
    else:
        print("Operation is not possible")