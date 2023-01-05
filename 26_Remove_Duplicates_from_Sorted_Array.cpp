class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0)
            return 0;
        int k=nums[0];
        int l=0;
        int n=nums.size();
        for (int i=0;i<n;++i){
            if (nums[i]!=k){
                nums[++l]=nums[i];
                k=nums[i];
            }
        }
        l++;
        return l;
    }
};
