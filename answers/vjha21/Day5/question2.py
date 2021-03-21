##To print the below pattern
## *
## # #
## * # *
## # * * *

def pattern_generator(end_point):
    #counter = 1
    for i in range(1, end_point+1):
        symbol = '#' if (i == 2 or i == 3 or i == 5 or i == 7) else '*'
        print(symbol, end='')
        if (i == 1 or i == 3 or i == 6):
            print('\r')

if __name__ == "__main__":
    pattern_generator(10)

    