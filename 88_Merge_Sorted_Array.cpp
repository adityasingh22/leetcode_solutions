class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int num1=0;
        int num2=0;
        while (num2<n && num1<m){
            if (nums1[num1]>=nums2[num2]){
                v.push_back(nums2[num2]);
                num2++;
            }
            else{
                v.push_back(nums1[num1]);
                num1++;
            }
        }
        if (num1<m){
            for (int i=num1;i<m;++i)
                v.push_back(nums1[i]);
        }
        else{
            for (int i=num2;i<n;++i)
                v.push_back(nums2[i]);
        }
        nums1=v;
    }
};
