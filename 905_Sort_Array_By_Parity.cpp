class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        int k=0;
        for (int i=0;i<n;++i){
            if (A[i]%2==0){
                swap(A[i], A[k]);
                k++;
            }
        }
        return A;
    }
};
