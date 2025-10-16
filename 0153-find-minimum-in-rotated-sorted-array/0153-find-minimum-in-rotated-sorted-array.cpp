class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = nums.size()-1;
        if(nums[low] <= nums[high]){
            return nums[low];
        }
        while(low <= high){
            int mid = low + (high-low)/2;
            if(mid > 0 && nums[mid] < nums[mid-1]){
                return nums[mid];
            }
            if(mid < n-1 && nums[mid+1] < nums[mid]){
                return nums[mid+1];
            }
            if(nums[low] <= nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};