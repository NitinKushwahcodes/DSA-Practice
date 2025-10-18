class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        int n = piles.size();
        if(n == h) return high;
        while(low <= high){
            int mid = low + (high-low)/2;
            int hour = 0;
            for(int num: piles){
               hour += (num + mid - 1) / mid;
               if(hour > h){
                 low = mid+1;
                 break;
               }
            }
            if(hour <= h){
                high = mid-1;
            }
        }
        return low;
    }
};