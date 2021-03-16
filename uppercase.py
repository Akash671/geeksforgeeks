for t in range(int(input())):
    a,b=map(str,input().split())
    s=a
    m=min(len(a),len(b))
    j=0
    for i in range(m):
      s[j]=a[j]
      #print(s)
      j+=1
      s[j]=b[j]
      j+=1
    #print(s)
