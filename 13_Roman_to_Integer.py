class Solution:
    def romanToInt(self, s: str) -> int:
        decimal=0
        i=0
        while i<len(s):
            if s[i]=='I' and (i+1)<len(s) and s[i+1]=='V':
                decimal+=4
                i+=1
            elif s[i]=='I' and (i+1)<len(s) and s[i+1]=='X':
                decimal+=9
                i+=1
            elif s[i]=='I':
                decimal+=1
            elif s[i]=='V':
                decimal+=5
            elif s[i]=='X' and (i+1)<len(s) and s[i+1]=='L':
                decimal+=40
                i+=1
            elif s[i]=='X' and (i+1)<len(s) and s[i+1]=='C':
                decimal+=90
                i+=1
            elif s[i]=='X':
                decimal+=10
            elif s[i]=='L':
                decimal+=50
            elif s[i]=='C' and (i+1)<len(s) and s[i+1]=='D':
                decimal+=400
                i+=1
            elif s[i]=='C' and (i+1)<len(s) and s[i+1]=='M':
                decimal+=900
                i+=1
            elif s[i]=='C':
                decimal+=100;
            elif s[i]=='D':
                decimal+=500
            elif s[i]=='M':
                decimal+=1000
            i+=1
        return decimal
