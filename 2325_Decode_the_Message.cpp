class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> m;
        char l='a';
        for (auto x:key){
            if (m.find(x)==m.end() && x!=' ')
                m[x]=l++;
            else
                continue;
        }
        for (int i=0;i<message.length();++i){
            if (m.find(message[i])!=m.end())
                message[i]=m[message[i]];
        }
        return message;
    }
};
