class Solution {
public:
    void reverseLtoR(vector<int>& nums, int l, int r){
        while(l < r){
            swap(nums[l++], nums[r--]);
        }
    }
    void nextPermutation(vector<int>& nums) {
        // code here
        int pvt_idx = -1;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                pvt_idx = i;
                break;
            }
        }
        if(pvt_idx == -1){
            reverseLtoR(nums, 0, nums.size()-1);
            return;
        }
        for(int i=nums.size()-1; i>pvt_idx; i--){
            if(nums[pvt_idx] < nums[i]){
                swap(nums[pvt_idx], nums[i]);
                break;
            }
        }
        reverseLtoR(nums, pvt_idx+1, nums.size()-1);
    }
};