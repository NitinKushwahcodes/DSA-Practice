class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int n = nums.size();
       vector<vector<int>>ans;
       for(int i=0; i<n; i++){
         if(i>0 && nums[i] == nums[i-1]){
            continue;
         }
         int j = i+1, k=n-1;
         while(j<k){
            int p = nums[i]+nums[j]+nums[k];
            if(p==0){
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while(j<k && nums[j] == nums[j-1]){
                    j++;
                }
            }
            else if(p<0){
                j++;
            }
            else{
                k--;
            }
         }
       }
       return ans;
    }
};