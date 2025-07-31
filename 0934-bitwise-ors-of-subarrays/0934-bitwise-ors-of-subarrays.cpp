class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr){
        unordered_set<int> a,c;
        c.reserve(32);
        a.reserve(32*arr.size());
        for(int x:arr){
            unordered_set<int> n;
            n.reserve(c.size()+1);
            n.insert(x);
            for(int v:c){
                n.insert(v|x);
            }
            for(int v:n){
                a.insert(v);
            }
            c.swap(n);
        }
        return a.size();
    }
};
