class Solution {
public:
    int firstIdx(vector<int>&nums, int target){
        int low = 0, high = nums.size()-1;
        int idx = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                idx = mid;
                high = mid-1;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return idx;
    }
    int lastIdx(vector<int>&nums, int target){
        int low = 0, high = nums.size()-1;
        int idx = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                idx = mid;
                low = mid+1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstIdx(nums,target), lastIdx(nums,target)};
    }
};