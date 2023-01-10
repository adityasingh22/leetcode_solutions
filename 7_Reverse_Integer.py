class Solution:
    def reverse(self, x: int) -> int:
        neg=False
        if x<0:
            neg=True
            x*=-1
        rev=int(str(x)[::-1])
        if neg:
            rev*=-1
        if rev<-pow(2, 31) or rev>pow(2, 31):
            rev=0
        return rev
