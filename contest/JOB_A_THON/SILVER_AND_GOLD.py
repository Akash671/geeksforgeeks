"""
author : @akash kumar
github : https://github/Akash671
"""
"""
string fun:

string.replace(sub_old_string,new_sub_string,count)
string.count(your_string)
"""

def solve():
   #n,m=map(int,input().split())
   #n=int(input())
   #a=list(map(int,input().split()[:n]))
   #s=str(input())
   #a,b=input().split()
   n=int(input())
   s=str(input())
   c=s.count('0')
   if c%2==0:
     print("Yes")
   else:
     print("No")

for _ in range(int(input())):   
   solve()
   
   
   
