class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for (int x : nums){
            if ((int)(log10(x)+1)%2==0)
                ans++;
        }
        return ans;
    }
};
