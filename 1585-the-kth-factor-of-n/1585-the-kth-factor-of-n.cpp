class Solution {
public:
    int kthFactor(int n,int k) {
        vector<int> a,b;
        int r=sqrt(n);
        for(int i=1; i<=r; i++){
            if(n%i == 0) {
                a.push_back(i);
                if(i != n/i){
                    b.push_back(n/i);
                }
            }
        }
        if(k <= a.size()){
            return a[k-1];
        }
        k -= a.size();
        if(k <= b.size()){
            return b[b.size()-k];
        }
        return -1;
    }
};
