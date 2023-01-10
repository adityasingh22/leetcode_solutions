class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans=""
        l=[]
        for x in strs:
           l.append(len(x))
        mins=min(l)
        for i in range(mins):
            v=strs[0][i]
            for x in strs:
                if x[i]!=v:
                    return ans
            ans+=v
        return ans
