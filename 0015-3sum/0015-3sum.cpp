class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; ++i) {
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int t = -nums[i];
            int l=i+1;
            int r=n-1;
            while(l<r){
                int s=nums[l]+nums[r];
                if(s<t){
                    l++;
                }
                else if(s>t){
                    r--;
                }
                else{
                    v.push_back({nums[i], nums[l], nums[r]});
                    while(l<r && nums[l] == nums[l+1]){
                        l++;
                    }
                    while(l<r&&nums[r]==nums[r-1]){
                        r--;
                    }
                    l++;
                    r--;
                }
            }
        }
        return v;
    }
};
