from collections import Counter
def anagram(input1, input2):
    return Counter (input1) == Counter(input2)
if __name__ == "__main__":
    input1 = input('enter characters')
    input2 = input('entar characters')
    print (anagram(input1, input2))
