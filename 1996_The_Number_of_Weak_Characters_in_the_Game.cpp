class Solution:
    def numberOfWeakCharacters(self, properties: List[List[int]]) -> int:
        properties=sorted(properties, key=lambda x:(x[0], -x[1]))
        ans=0
        m=-int(1e9+7)
        for i in range(len(properties)-1, -1, -1):
            if properties[i][1]<m:
                ans+=1
            m=max(m, properties[i][1])
        print(properties)
        return ans
