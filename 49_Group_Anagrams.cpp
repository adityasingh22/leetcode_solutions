class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=0;
        map<string, vector<string>> m;
        for (string& x : strs){
            string s=x;
            sort(s.begin(), s.end());
            m[s].push_back(x);
        }
        vector<vector<string>> v(m.size(), vector<string>());
        for (auto it=m.begin(); it!=m.end();++it){
            v[n]=it->second;
            n++;
        }
        return v;
    }
};
