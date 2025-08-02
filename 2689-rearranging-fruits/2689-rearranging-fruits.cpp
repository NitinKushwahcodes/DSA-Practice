class Solution {
public:
    long long minCost(vector<int>& basket1,vector<int>& basket2){
        map<int,int> f;
        for(int x: basket1){
            f[x]++;
        }
        for(int x: basket2){
            f[x]--;
        }
        vector<int>e;
        int m=INT_MAX;
        for(auto& [x,c]: f){
            if(c%2!=0){
                return -1;
            }
            int d=abs(c)/2;
            for(int i=0; i<d; i++){
                e.push_back(x);
            }
            m=min(m,x);
        }
        sort(e.begin(), e.end());
        long long s=0;
        int n=e.size();
        for(int i=0; i<n/2; i++){
            s += min((long long)e[i],2LL*m);
        }
        return s;
    }
};
