class Solution {
public:
    int findComplement(int num) {
        int bits=log2(num)+1;
        unsigned int m=(1<<bits);
        m--;
        return num^m;
    }
};
