""" There are 2 languages. The both languages consist of lowercase english charecter,
    the word of these languages have one by one corresponding. You are given a sentence that contain the word
    of 1st language only. You have to make the sentence as short as possible. You can write each word either in 1st
    language or the other language. In case of equal length, prefer the 1st language.
"""

""" word_list = [[codeforces,codesercof],[contest,round],[letter,message]]
    sentence = [codeforce,contest,letter,contest]
"""


def shortest_sentence(sentence, word_list):
    word_list = ordered_word_list(word_list)
    for i in range(0, len(sentence)):
        for j in range(0, len(word_list) - 1):
            # print(f"Copmaring {sentence[i]} and {word_list[1][j]}")
            if (sentence[i]) == (word_list[1][j]):
                # print(f"\nSwapping :  {sentence[i]} with {word_list[1][j-1]}")
                sentence[i] = word_list[1][j - 1]
    return sentence


def ordered_word_list(word_list):
    word_cases = len(word_list)
    for i in range(0, word_cases):
        if len(word_list[i][0]) > len(word_list[i][1]):
            word_list[i][0], word_list[i][1] = word_list[i][1], word_list[i][0]
    """ for el in word_list:
        print(el)
    print("") """
    return word_list


if __name__ == "__main__":
    """n, m = 4, 3
    word_list = [
        ["codeforces", "codesercof"],
        ["contest", "round"],
        ["letter", "message"],
    ]
    sentence = ["codeforces", "contest", "letter", "contest"]"""

    ##Taking input
    n_m = input(
        "Enter number of words in string and total number of words in both language : "
    )
    n, m = n_m.split()
    word_list = []
    for i in range(0, int(m)):
        w1_w2 = input("Enter corresponding words : ")
        w1, w2 = w1_w2.split()
        word_list.append([w1, w2])
    sentence = list(input("Enter the array a elements : ").strip().split())[: int(n)]

    print("Word list entered : ", word_list)
    print("Sentence entered  : ", sentence)

    print(f"Original sentence : {sentence}")
    print(f"Sentence after operation : {shortest_sentence(sentence, word_list)}")
