# Python3 code to alternatively merge two strings 

# Function for alternatively merging two strings 
def merge(s1, s2): 
        
        # To store the final string 
        result = "" 

        # For every index in the strings 
        i = 0
        while (i < len(s1)) or (i < len(s2)):
                
                # First choose the ith character of the 
                # first string if it exists 
                if (i < len(s1)):
                        result += s1[i] 

                # Then choose the ith character of the 
                # second string if it exists 
                if (i < len(s2)):
                        result += s2[i] 
                        
                i += 1
                
        return result

for t in range(int(input())):
    s1,s2=map(str,input().split())
    print(merge(s1, s2))

# This code is contributed by divyesh072019
