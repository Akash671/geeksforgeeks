s=str(input())
s+="a"
a=[]
b=""
c=0
e=0
for i in s:
    if i.isdigit():
       b+=i
       c=1
       e=1
    else:
       if c==1:
         a.append(b)
         b=""
         c=0
if e==1:
  ma=int(a[0])
  for i in range(1,len(a)):
    if ma<int(a[i]):
        ma=int(a[i])
  print(ma)
else:
    print(-1)
