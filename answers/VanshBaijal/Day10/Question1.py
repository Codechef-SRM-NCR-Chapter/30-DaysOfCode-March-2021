import string
st=input("Input: ")
print("Pangram exists") if set(st.lower())>=set(string.ascii_lowercase) else print("Pangram doesn't exists") 
