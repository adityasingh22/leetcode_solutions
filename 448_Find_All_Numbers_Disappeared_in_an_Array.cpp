class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n/2);
        int k=0;
        for (int i=0;i<n;++i){
            if (nums[abs(nums[i])-1]>0)
                nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        for (int i=1;i<=n;++i)
            if (nums[i-1]>0)
                v[k++]=i;
        v.resize(k);
        return v;
    }
};
