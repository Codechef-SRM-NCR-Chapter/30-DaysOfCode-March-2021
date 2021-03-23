n=1
for i in range(5):
  if i==1:
    print("*",end="")
  for j in range(i):
    if n > 1:

      for i in range(2,n):
        if (n % i) == 0:
          print("*",end="")
          break
      else:
        print("#",end="")

    n+=1
  print()
