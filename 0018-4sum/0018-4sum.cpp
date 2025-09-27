class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target){
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j=i+1; j<n-2; j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                int p=j+1, k=n-1;
                while(p<k){
                    long long sum = (long long)nums[i]+nums[j]+nums[p]+nums[k];
                    if(sum == target){
                        ans.push_back({nums[i], nums[j], nums[p], nums[k]});
                        p++;
                        k--;
                        while(p<k && nums[p] == nums[p-1]){
                           p++;
                        }
                        while(p<k && nums[k] == nums[k+1]){
                            k--;
                        }
                    }
                    else if(sum < target){
                        p++;
                    }
                    else{
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};
