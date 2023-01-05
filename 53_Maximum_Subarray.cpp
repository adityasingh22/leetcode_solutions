class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=0;
        int ans=INT_MIN;
        for (int& x : nums){
            a=max(x, a+x);
            ans=max(ans, a);
        }
        return ans;
    }
};
