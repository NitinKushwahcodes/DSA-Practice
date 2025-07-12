class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        if(n==0){
            return 0;
        }
        int m = A[0].size();
        vector<vector<int>> d(n,vector<int>(m));
        for(int j=0; j<m; j++){
            d[n-1][j] = A[n-1][j];
        }
        for(int i=n-2; i>=0; i--) {
            for(int j=0; j<m; j++) {
                int b = d[i+1][j];
                if(j>0){
                    b=min(b,d[i+1][j-1]);
                }
                if(j+1<m){
                    b=min(b,d[i+1][j+1]);
                }
                d[i][j] = A[i][j]+b;
            }
        }
        return *min_element(d[0].begin(),d[0].end());
    }
};
