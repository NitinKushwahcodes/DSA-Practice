class Solution {
public:
    int countMaxOrSubsets(vector<int>& a) {
        int n=a.size(), t=0;
        for (int i=0; i<a.size(); i++){
            t = t | a[i];
        }
        int ans=0;
        for(int m=1; m<(1<<n); m++){
            int o=0;
            for(int i=0; i<n; i++){
                if(m>>i&1){
                    o|=a[i];
                    if(o==t) break;
                }
            }
            if(o==t) ans++;
        }
        return ans;
    }
};
