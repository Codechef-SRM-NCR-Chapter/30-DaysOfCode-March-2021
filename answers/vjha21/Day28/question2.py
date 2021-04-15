""" To construct a permutation a of numbers from 1 to n which has exactly k peaks
    An index i of an array a of size n is said to be a peak if 1 < i < n and ai>a(i-1) and a1>a(i+1)
    If not possible : print -1    
"""
""" 1 2 3 4 5 6
1 2 3 6 4 5
1 2 5 3 6 4
1 4 2 5 3 6 """


def generate_perms(length, peaks):
    number_set = [i for i in range(1, length + 1)]
    print("Original number set : ", number_set)
    no_of_peaks = 0
    k = 1

    out_stacks = []
    while no_of_peaks < peaks:
        out_stack = []
        last = number_set.pop()
        # print("Last : ", last)
        mid_idx = len(number_set) // 2 + k
        for i in range(0, len(number_set)):
            if i == mid_idx:
                out_stack.append(last)
                mid_idx -= 1
                out_stack.append(number_set[i])
            else:
                out_stack.append(number_set[i])
        out_stacks.append(out_stack)
        no_of_peaks += 1
        number_set = out_stack
        k -= 1
    return out_stacks[-1]


if __name__ == "__main__":
    N = 6
    peaks = 3
    n_p = input("Enter the length of array and number of peaks : ")
    N, peaks = n_p.split()
    print(
        f"Permutation of original number set with {int(peaks)} peaks is : {generate_perms(int(N), int(peaks))}"
    )
