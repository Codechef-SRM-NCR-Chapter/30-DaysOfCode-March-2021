""" To reverse the order of the first K elements of the queue,
    leaving the other elements in the same relative order.
"""


def reverse_selective(queue, K):
    to_reverse = queue[:K]
    to_not_reverse = queue[K:]
    """ Reversing the first part """
    to_reverse = to_reverse[::-1]

    return [*to_reverse, *to_not_reverse]


if __name__ == "__main__":
    queue = [1, 2, 3, 4, 5]
    K = 3
    print(f"AFTER REVERSAL at {K} :", reverse_selective(queue, K))
