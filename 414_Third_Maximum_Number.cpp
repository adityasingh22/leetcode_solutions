class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ans=0;
        vector<int> v;
        set<int> s;
        for (int i=0;i<nums.size();++i)
            s.insert(nums[i]);
        for (auto it=s.begin();it!=s.end();++it)
            v.push_back(*it);
        sort(v.begin(), v.end(), greater<int>());
        if (v.size()>2)
            ans=v[2];
        else
            ans=v[0];
        return ans;
    }
};
