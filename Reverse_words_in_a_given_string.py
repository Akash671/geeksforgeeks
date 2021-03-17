"""author akash kumar"""

class Solution:
    
    def reverseWords(self,s):
        # code here 
       # s=str(input())
        s="."+s
        S=""
        n=len(s)
        c=n-1
        d=0

        for i in range(n):
         if s[n-i-1]==".":
           if i==d:
               S+=s[n-i:c]+s[n-1]
           else:
              S+="."+s[n-i:c]
           c=n-i-1
         else:
           d+=1
        return S

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        obj = Solution()
        print(obj.reverseWords(s))
