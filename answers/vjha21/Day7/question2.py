##Find number of good triplets from array of integers arr, and three integers a,b,c.


def count_good_triplets(array, a, b, c):
    count = 0
    array_length = len(array)
    for i in range(0, array_length):
        for j in range(i + 1, array_length):
            if abs(array[i] - array[j]) > a:
                continue
            for k in range(j + 1, array_length):
                if abs(array[j] - array[k]) <= b and abs(array[i] - array[k]) <= c:
                    count = count + 1
    return count


if __name__ == "__main__":
    array = [3, 0, 1, 1, 9, 7]
    a, b, c = 7, 2, 3
    print(count_good_triplets(array, a, b, c))