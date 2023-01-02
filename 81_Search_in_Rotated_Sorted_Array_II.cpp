class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target){
        if (high<low)
            return -1;
        int mid=low+(high-low)/2;
        if (nums[mid]==target){
            return mid;
        }
        else if (nums[mid]==nums[low] && nums[high]==nums[mid]){
            return binarySearch(nums, low+1, high-1, target);
        }
        else if (nums[low]<=nums[mid]){
            if (nums[low]<=target && nums[mid]>target)
                return binarySearch(nums, low, mid-1, target);
            else
                return binarySearch(nums, mid+1, high, target);
        }
        else{
            if (nums[high]>=target && nums[mid]<target)
                return binarySearch(nums, mid+1, high, target);
            else
                return binarySearch(nums, low, mid-1, target);
        }
    }
    
    bool search(vector<int>& nums, int target) {
        int ans=binarySearch(nums, 0, nums.size()-1, target);
        return ans!=-1;
    }
};
