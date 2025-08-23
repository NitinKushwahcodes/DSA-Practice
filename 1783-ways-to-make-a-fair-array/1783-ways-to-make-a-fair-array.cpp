class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        int even_sum=0, odd_sum=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                even_sum+=nums[i];
            }
            else{
                odd_sum+=nums[i];
            }
        }
        int count=0;
        int even_sum2=0, odd_sum2=0;
        int p,q;
        for(int i=0; i<n; i++){
            if(i%2==0) even_sum2+=nums[i];
            else odd_sum2+=nums[i];
            if(i%2==0){
                p=even_sum2-nums[i]+(odd_sum-odd_sum2);
                q=odd_sum2+(even_sum-even_sum2);
            }
            else{
                q=odd_sum2-nums[i]+(even_sum-even_sum2);
                p=even_sum2+(odd_sum-odd_sum2);
            }
            if(p==q) count++;
        }
        return count;
    }
};