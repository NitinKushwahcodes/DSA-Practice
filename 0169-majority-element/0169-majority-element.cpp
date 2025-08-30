class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int vote = 0;
       int mj;
       for(int num: nums){
          if(vote == 0){
            mj = num;
          }
          if(num == mj){
            vote++;
          }
          else{
            vote--;
          }
       }
       return mj;
    }
};