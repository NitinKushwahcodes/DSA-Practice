class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=INT_MIN;
        for(int num: piles){
            high=max(high,num);
        }
        while(low<high){
            int mid=low + (high - low)/2;
            int hr=0;
            for(int num:piles){
                hr+=ceil(1.0 * num/mid);
            }
            if(hr>h){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};