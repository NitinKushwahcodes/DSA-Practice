class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        int max_sum=sum;
        int end=k;
        for(int i=0; end<n; i++){
           sum+=nums[end]-nums[i];
           end++;
           max_sum=max(max_sum,sum);
        }
        return double(max_sum)/k;
    }
};