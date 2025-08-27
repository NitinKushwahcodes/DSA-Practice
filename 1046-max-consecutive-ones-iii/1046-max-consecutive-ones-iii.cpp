class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n=nums.size();
       int fliped=0;
       int max_ones=0;
       int start=0, end=0;
       while(end<n){
         if(nums[end]==0){
           fliped++;
         }
         if(fliped>k){
            if(nums[start]==0){
              fliped--;
            }
            start++;
         }
         max_ones=max(max_ones,(end-start+1));
         end++;
       } 
       
       return max_ones;
    }
};