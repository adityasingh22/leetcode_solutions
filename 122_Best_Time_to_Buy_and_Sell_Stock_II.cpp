class Solution {
    int INF=1e9+7;
public:
    int maxProfit(vector<int>& prices) {
        int keep=-INF, sell=0;
        for (int& x : prices){
            keep=max(keep, sell-x);
            sell=max(sell, keep+x);
        }
        return sell;
    }
};
