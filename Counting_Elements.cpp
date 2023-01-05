class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int, int> m;
        int count=0;
        for (int& x : arr){
            m[x]++;
        }
        for (auto it=m.begin();it!=m.end();++it){
            if (m.find(it->first+1)!=m.end())
                count+=it->second;
        }
        return count;
    }
};
