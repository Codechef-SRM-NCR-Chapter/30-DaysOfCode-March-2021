""" Count all the possible paths from top left to bottom right of a m x n
    matrix with contraints that from each cell you can either move only to 
    right or down. 
"""


def possiblePaths(m, n):
    matrix = [[0 for x in range(m)] for y in range(n)]

    for i in range(m):
        matrix[i][0] = 1

    for j in range(n):
        matrix[0][j] = 1

    for element in matrix:
        print(element)

    for i in range(1, m):
        for j in range(1, n):
            matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1]

    print(" ")
    for element in matrix:
        print(element)
    return matrix[m - 1][n - 1]


if __name__ == "__main__":
    m = 2
    n = 2
    count = possiblePaths(m, n)
    print(count)
