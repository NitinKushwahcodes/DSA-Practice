class Solution {
public:
    int maxProduct(vector<int>& nums){
        int ans = nums[0];
        int n = nums.size();
        int left_prd = 1;
        int right_prd = 1;
        for(int i=0; i<n; i++){
            if(left_prd == 0){
                left_prd = 1;
            }
            if(right_prd == 0){
                right_prd = 1;
            }
            left_prd *= nums[i];
            right_prd *= nums[n-i-1];
            ans = max(ans, max(left_prd, right_prd));
        }
        return ans;
    }
};