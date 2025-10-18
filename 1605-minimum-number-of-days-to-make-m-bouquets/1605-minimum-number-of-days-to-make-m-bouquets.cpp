class Solution {
public:
    int check(vector<int>& arr, int day , int m, int k){
        int cl_fl = 0, cl_bq = 0;
        for(int num: arr){
            if(num <= day){
                cl_fl++;
                if(cl_fl == k){
                    cl_bq++;
                    cl_fl = 0;
                    if(cl_bq >= m){
                        return true;
                    }
                }
            }
            else{
                cl_fl = 0;
            }
        }
        return cl_bq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans = -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        if(1LL*m*k > bloomDay.size()) return -1;
        while(low <= high){
            int mid = low +(high-low)/2;
            int val = check(bloomDay, mid, m, k);
            if(val){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};