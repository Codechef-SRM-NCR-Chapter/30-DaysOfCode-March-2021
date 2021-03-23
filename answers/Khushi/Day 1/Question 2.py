for i in range(1, 5):
    string = "\t" * (4 - i)
    for j in range(i):
        string += '*\t'
    print(string)