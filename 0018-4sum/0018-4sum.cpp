class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target){
        vector<vector<int>> ans;
        int n=nums.size();
        if(n<4) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int l=j+1,r=n-1;
                long long t=(long long)nums[i]+nums[j];
                while(l<r){
                    long long s=t+nums[l]+nums[r];
                    if(s<target){
                        l++;
                    }
                    else if(s>target){
                        r--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        int x=nums[l],y=nums[r];
                        while(l<r&&nums[l]==x) l++;
                        while(l<r&&nums[r]==y) r--;
                    }
                }
            }
        }
        return ans;
    }
};
