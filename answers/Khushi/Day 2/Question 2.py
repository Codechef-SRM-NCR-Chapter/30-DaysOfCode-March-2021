def isPrime(num):
    if(num<=1):
        return "NOT AN EMIRP NUMBER"
    for i in range(2,num):
        if num%i==0:
            return "NOT AN EMIRP NUMBER"
    return "IS AN EMIRP NUMBER"
def solve(num):
    if isPrime(num)=="NOT AN EMIRP NUMBER":
        return "NOT AN EMIRP NUMBER"
    reverse=0
    while num!=0:
        d=num%10
        reverse=reverse*10+d
        num=int(num/10)
    return isPrime(reverse)
n=int(input())
print (solve(n))