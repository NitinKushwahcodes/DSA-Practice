class Solution {
public:
    int nCr(int n, int r){
        int p = min(r, n-r);
        long long ans = 1;
        for(int i=0; i<p; i++){
            ans = ans * (n-i);
            ans = ans / (i+1);
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        for(int i=0; i<rowIndex+1; i++){
            int ele = nCr(rowIndex, i);
            ans.push_back(ele);
        }
        return ans;
    }
};