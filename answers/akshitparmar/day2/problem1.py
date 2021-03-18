def prime(num):
   if num <= 1:
      return False
   for i in range(2, num):
      if num % i == 0:
         return False
   return True
def solve(num):
   if not prime(num):
      return False
   reverse_num = 0
   while num != 0:
      d = num % 10
      reverse_num = reverse_num * 10 + d
      num = int(num / 10)
   return prime(reverse_num)
n = int(input())
if(solve(n) is True):
    print(n,"IS AN EMIRP NUMBER")

