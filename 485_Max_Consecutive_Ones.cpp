class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for (int i=0;i<n;++i){
            if (nums[i]==1){
                int m=0;
                while (nums[i]==1){
                    i++;
                    m++;
                    if (i==nums.size())
                        break;
                }
                ans=max(ans, m);
            }
        }
        return ans;
    }
};
