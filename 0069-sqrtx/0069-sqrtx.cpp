class Solution {
public:
    int mySqrt(int n) {
        if(n<2){
            return n;
        }
        int ans = 0;
        int low=0, high=n;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(mid <= n/mid){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};