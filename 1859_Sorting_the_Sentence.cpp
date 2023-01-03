class Solution {
public:
    string sortSentence(string s) {
        map<int, string> m;
        int start=0;
        string res="";
        for (int i=0;i<s.length();++i){
            int l=s[i]-'0';
            if (l<=9 && l>0){
                if (m.find(l)==m.end())
                    m[l]=s.substr(start, i-start);
                start=i+2;
            }
        }
        for (auto it=m.begin();it!=m.end();++it){
            res+=(it->second + " ");
        }
        return res.substr(0, res.length()-1);
    }
}
