c=1
for i in range(5):
  if i==1:
    print("*",end="")
  for j in range(i):
    if c > 1:

      for i in range(2,c):
        if (c % i) == 0:
          print("*",end="")
          break
      else:
        print("#",end="")

    c+=1
  print()
