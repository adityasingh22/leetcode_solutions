class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        vector<int> v;
        v=heights;
        sort(v.begin(), v.end());
        for (int i=0;i<heights.size();++i){
            if (heights[i]!=v[i])
                ans++;
        }
        return ans;
    }
};
