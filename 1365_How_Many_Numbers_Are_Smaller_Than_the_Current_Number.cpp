class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v, k;
        k=nums;
        sort(k.begin(), k.end());
        for (int i=0;i<nums.size();++i){
            auto it=lower_bound(k.begin(), k.end(), nums[i]);
            v.push_back(it-k.begin());
        }
        return v;

    }
};
