# Program to Count all possible paths from top left to bottom right of matrix (m x n) :)


def count(m=0, n=0):
    if M == m+1 or N == n+1:
        return 1
    else:
        return count(m+1, n) + count(m, n+1)


M, N = map(int, input("Enter value of M and N *With spaces b/w number* :").split())
print("Total possible paths are :", count())
