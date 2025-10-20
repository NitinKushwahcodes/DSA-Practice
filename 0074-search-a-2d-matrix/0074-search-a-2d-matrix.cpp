class Solution {
public:
    bool searchRow(vector<vector<int>>& matrix, int target, int row){
        int c=matrix[0].size();
        int l=0, h=c-1;
        while(l <= h){
            int m = l + (h-l)/2;
            if(matrix[row][m]==target){
                return true;
            }
            else if(matrix[row][m]>target){
                h = m - 1;
            }
            else{
                l = m+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int low=0, high=r-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[mid][0] <= target && matrix[mid][c-1]>=target){
                // searching in row;
                return searchRow(matrix, target,mid);
            }
            else if(target < matrix[mid][0]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};