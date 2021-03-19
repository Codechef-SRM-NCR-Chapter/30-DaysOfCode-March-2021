n=input()
def func():
    for i in range(len(n)-1):
        if int(n[i])==int(n[i+1]):
            print(n,"IS NOT AN UNIQUE NUMBER")
            return False
    print(n,"IS AN UNIQUE NUMBER")
func()
  

