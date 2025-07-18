class Solution {
public:
    int threeSumClosest(vector<int>& nums,int target){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int b=nums[0]+nums[1]+nums[2];
        for(int i=0; i<n-2; i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                int s=nums[i]+nums[l]+nums[r];
                if(abs(s-target) < abs(b-target)){
                    b=s;
                }
                if(s < target){
                    l++;
                }
                else if(s > target){
                    r--;
                }
                else{
                    return target;
                }
            }
        }
        return b;
    }
};
