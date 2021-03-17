print("30 DAYS of CODE")
print("DAY 1")
print("Question 2")

rows=6
for i in range(0,4):
      for j in range(0,rows):
            print(end=" ")
      rows=rows-2
      for j in range(0,i+1):
            print("* ",end="")
      print("\r")