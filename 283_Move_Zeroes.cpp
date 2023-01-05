class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int num=0;
        for (int& x : nums){
            if (x!=0){
                nums[num]=x;
                num++;
            }
        }
        nums.resize(num);
        nums.resize(n, 0);
        for (int& x : nums)
            cout<<x<<" ";
    }
};
