class Solution {
public:
    int totalFruit(vector<int>& fruits){
        int n=fruits.size();
        unordered_map<int,int> f;
        f.reserve(4);
        int l=0;
        int d=0;
        int a=0;
        for(int r=0; r<n; r++){
            f[fruits[r]]++;
            if(f[fruits[r]] == 1){
                d++;
            }
            while(d>2){
                f[fruits[l]]--;
                if(f[fruits[l]] == 0){
                    d--;
                }
                l++;
            }
            if(a<r-l+1){
                a=r-l+1;
            }
        }
        return a;
    }
};
