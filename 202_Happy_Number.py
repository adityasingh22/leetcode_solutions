class Solution:
    def isHappy(self, n: int) -> bool:
        m=0
        while True:
            n=str(n)
            for x in n:
                m+=pow(int(x), 2)
                n=m
            if m==1:
                return True
            if m==89:
                return False
            m=0
