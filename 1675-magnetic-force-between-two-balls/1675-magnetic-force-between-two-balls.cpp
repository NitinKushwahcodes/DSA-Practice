class Solution {
public:
    bool isPossible(vector<int>& arr, int m, int mid){
        int last_mag = arr[0];
        int mag = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] - last_mag >= mid){
                mag++;
                last_mag = arr[i];
                if(mag == m){
                    return true;
                }
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int ans = 0;
        int min_dist = 1;
        int max_dist = position[n - 1] - position[0];
        while(min_dist <= max_dist){
            int mid = min_dist + (max_dist - min_dist)/2;
            if(isPossible(position, m, mid)){
                ans = mid;
                min_dist = mid + 1;
            }
            else{
                max_dist = mid - 1 ;
            }
        }
        return ans;
    }
};