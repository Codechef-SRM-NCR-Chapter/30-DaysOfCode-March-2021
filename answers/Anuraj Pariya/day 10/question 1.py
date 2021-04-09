import string
pan = input("Sentence")
alphabet = set(string.ascii_lowercase)

if set(pan.lower()) >= alphabet:
    print("Pangram exists")
else:
    print("Pangram doesn't exist")
