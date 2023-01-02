class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        v.push_back(num%10);
        v.push_back((num/10)%10);
        v.push_back((num/100)%10);
        v.push_back(num/1000);
        sort(v.begin(), v.end());
        return (v[0]*10+v[3]) + (v[1]*10+v[2]);
    }
};
