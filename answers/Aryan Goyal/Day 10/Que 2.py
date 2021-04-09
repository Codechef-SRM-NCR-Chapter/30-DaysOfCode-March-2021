def camel():
     s=input()
     l=[]
     no1=0
     for i in range(len(s)):
          if s[i].isupper():
               no1+=1
               l.append(s[i])
               for j in range(i+1,len(s)):
                    if s[j].isupper():
                         break
                    else:
                         l.append(s[j])
               for k in l:
                    print(k,end="")
               print("\r")
          l=[]
          
     print(no1)
camel()
