class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v, copy;
        copy=nums;
        sort(copy.begin(), copy.end());
        for (int i=0;i<copy.size();++i){
            int second=target-copy[i];
            if (binary_search(copy.begin()+i+1, copy.end(), second)){
                int low=lower_bound(copy.begin()+i+1, copy.end(), second)-copy.begin();
                int high=lower_bound(copy.begin(), copy.end(), copy[i])-copy.begin();
                for (int i=0;i<nums.size();++i){
                    if (v.size()==2)
                        break;
                    if (nums[i]==copy[low] || nums[i]==copy[high])
                        v.push_back(i);
                }          
                break;
            }
        }
        return v;
    }
};
