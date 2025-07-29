class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffix_or(n+1,0);
        for(int i=n-1; i>=0; i--){
            suffix_or[i]=suffix_or[i+1]|nums[i];
        }
        static const int B=31;
        vector<array<int,B>> next_pos(n+1);
        for(int b=0; b<B; b++){
            next_pos[n][b]=n;
        }
        for(int i=n-1; i>=0; i--){
            for(int b=0; b<B; b++){
                if(nums[i]&(1<<b)){
                    next_pos[i][b]=i;
                }
                else{
                    next_pos[i][b]=next_pos[i+1][b];
                }
            }
        }

        vector<int> ans(n);
        for(int i=0; i<n; i++){
            int target=suffix_or[i];
            int j=i;
            for(int b=0; b<B; b++){
                if(target&(1<<b)){
                    if(next_pos[i][b]>j){
                        j=next_pos[i][b];
                    }
                }
            }
            ans[i]=j-i+1;
        }
        return ans;
    }
};
