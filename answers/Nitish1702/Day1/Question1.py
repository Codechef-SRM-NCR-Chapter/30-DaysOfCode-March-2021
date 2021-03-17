n= int(input("Enter the no. of terms"))
l=[((i**3)+(2*i)) for i in range (1,n+1)]
print(str(l).rstrip(']').lstrip('['))
