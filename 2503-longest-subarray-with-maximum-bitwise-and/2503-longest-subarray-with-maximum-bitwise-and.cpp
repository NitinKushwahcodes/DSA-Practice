class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k = *max_element(nums.begin(), nums.end());
        int best = 0;
        int cur = 0;
        for (int x : nums){
            if(x==k){
                cur++;
                best=max(best, cur);
            }
            else{
                cur = 0;
            }
        }
        return best;
    }
};
