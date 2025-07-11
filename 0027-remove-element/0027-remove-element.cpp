class Solution {
public:
    int removeElement(vector<int>& v,int x) {
        int a = 0;
        for(int b=0; b<v.size(); b++) {
            if(v[b]!=x){
                v[a++]=v[b];
            }
        }
        return a;
    }
};
