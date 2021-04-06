def checkExpression(exp):
    st=[]
    for char in exp:
        if(char in ["(", "{", "["]):
            st.append(char)
        else:
            if(not st):
                return False
            char1=st.pop()
            if(char1=='('):
                if(char!=")"):
                    return False
            if(char1=='{'):
                if(char!="}"):
                    return False
            if(char1=='['):
                if(char!="]"):
                    return False
    if(st):
        return False
    return True

exp=input("Enter expression: ")
if(checkExpression(exp)):
    print("OUTPUT: TRUE")
else:
    print("OUTPUT: FALSE")