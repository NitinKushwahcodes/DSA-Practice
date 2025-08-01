class Solution {
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> a;
        a.reserve(numRows);
        for(int i=0; i<numRows;i++){
            vector<int> r(i+1,1);
            for(int j=1; j<i; j++){
                r[j]=a[i-1][j-1]+a[i-1][j];
            }
            a.push_back(move(r));
        }
        return a;
    }
};
