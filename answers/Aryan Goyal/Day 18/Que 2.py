m =list(map(int, input().split()))
m1=[]
for i in range(len(m)):
  m1.append((m[i],i))
def binary1(v):
    c = 0
    while v:
        c += v % 2
        v = v//2
    return c
sm = sorted(m1, key=lambda v: (binary1(v[0]), len(m)-v[1]), reverse=True)
sm = [v[0] for v in sm]
print(sm)
