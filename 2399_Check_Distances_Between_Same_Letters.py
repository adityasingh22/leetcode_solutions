class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        visi={}
        for i in range(len(s)):
            if(visi.get(s[i])==None):
                visi[s[i]]=i
                print(visi)
            elif(i-visi[s[i]]-1!=distance[ord(s[i])-97]):
                return False
        return True
