class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if (A.size()<3)
            return false;
        int n=0;
        for (int i=1;i<A.size();++i){
            if (A[i]<=A[i-1]){
                n=i-1;
                break;
            }
        }
        if (n==0)
            return false;
        for (int i=n;i<A.size()-1;++i){
            if (A[i+1]>=A[i])
                return false;
        }
        return true;
    }
};
