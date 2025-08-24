class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int curr_sum=0;
        int min_len=INT_MAX;
        int low=0, high=0;
        while(high<n){
            curr_sum+=nums[high];
            high++;
            while(curr_sum>=target){
                int curr_len=high-low;
                min_len=min(min_len,curr_len);
                curr_sum-=nums[low];
                low++;
            }
        }
        if(min_len==INT_MAX) return 0;
        return min_len;
    }
};