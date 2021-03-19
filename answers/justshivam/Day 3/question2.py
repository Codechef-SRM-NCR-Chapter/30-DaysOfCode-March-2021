def check(num):
    stage = []
    for i in num:
        if i in stage:
            print(f"{num} is not a Unique Number.")
            return
        stage.append(i)
    print(f'{num} is a Unique Number.')


num = input('Enter the number: ')

check(num)
