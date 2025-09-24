class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int max_num=INT_MIN;
        int max_sum=0;
        for(int num:nums){
            max_num=max(max_num,num);
            max_sum+=num;
        }
        while(max_num<max_sum){
            int mid=max_num + (max_sum - max_num)/2;
            int sum=0;
            int x=1;
            for(int num: nums){
                if(sum+num > mid){
                    x++;
                    sum=0;
                }
                sum+=num;
            }
            if(x>k){
                max_num=mid+1;
            }
            else{
                max_sum=mid;
            }
        }
        return max_num;
    }
};