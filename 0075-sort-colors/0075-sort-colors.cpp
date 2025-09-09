class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int num: nums){
            if(num == 0){
                zero++;
            }
            else if(num == 1){
                one++;
            }
            else{
                two++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(i < zero){
                nums[i] = 0;
            }
            else if(i < one+zero){
                nums[i] = 1;
            }
            else{
                nums[i] = 2;
            }
        }
    }
};