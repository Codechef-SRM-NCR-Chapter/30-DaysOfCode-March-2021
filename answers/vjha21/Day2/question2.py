##To check if number is desarium
def checkDesarium(number):
    numberArray = [char for char in number]
    answer = 0
    for i in range(len(numberArray)):
        answer += int(numberArray[i])**(i+1)

    if answer == int(number):
        print(f'{number} is a Desarium')
    else:
        print(f'{number} is not a Desarium')



if __name__ == "__main__":
    number = input('Enter a number: ')
    checkDesarium(number)