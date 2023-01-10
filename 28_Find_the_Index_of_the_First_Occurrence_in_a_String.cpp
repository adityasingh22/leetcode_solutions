class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle=="")
            return 0;
        int hay=haystack.length();
        int ned=needle.length();
        for (int i=0;i<=hay-ned;++i){
            if (haystack.substr(i, ned)==needle)
                return i;
        }
        return -1;
    }
};
