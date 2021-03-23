#program to print first 50 terms of fibonacci series:

num_of_terms=50
i = 0
first_value = 0
second_value = 1

while(i<num_of_terms):
    
    if(i<=1):
        x=i
    else:
        x=first_value+second_value
        first_value=second_value
        second_value=x
        
    print(x)
    i+=1
