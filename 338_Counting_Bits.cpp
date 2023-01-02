class Solution {
public:
    int countBit (int m){
        if (m==0)
            return 0;
        int count=0;
        int l=log2(m)+1;
        for (int i=0;i<=m && l>=0;++i){
            if (m&(1<<l))
                count++;
            l--;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for (int i=0;i<=n;++i){
            int l=countBit(i);
            v.push_back(l);
        }
        return v;
    }
};
