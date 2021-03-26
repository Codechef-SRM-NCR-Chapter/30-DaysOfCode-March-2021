import string
st=input("Input String: ")
print(f'{st} is Pangram') if set(st.lower())>=set(string.ascii_lowercase) else print(f'{st} is not Pangram') 
