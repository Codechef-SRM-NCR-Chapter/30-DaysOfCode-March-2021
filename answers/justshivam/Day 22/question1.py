def run(string):
    for i in range(1, len(string)):
        if string[i] == string[i-1]:
            arr = [ch for ch in string]
            del arr[i-1:i+1]
            return run(''.join(arr))
    return string


print(run(input()))
