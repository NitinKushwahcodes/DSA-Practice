class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits,vector<int>& baskets){
        int n=fruits.size();
        vector<bool> used(n,0);
        int u=0;
        for(int x:fruits){
            bool p=0;
            for(int j=0; j<n; j++){
                if(!used[j] && baskets[j]>=x){
                    used[j]=1;
                    p=1;
                    break;
                }
            }
            if(!p){
                u++;
            }
        }
        return u;
    }
};
