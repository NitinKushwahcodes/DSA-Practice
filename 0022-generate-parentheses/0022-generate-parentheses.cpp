class Solution {
public:
    vector<string> generateParenthesis(int n){
        vector<string> a;
        string c;
        backtrack(a,c,0,0,n);
        return a;
    }
private:
    void backtrack(vector<string>& a,string& c,int o,int cl,int n){
        if(o+cl==2*n){
            a.push_back(c);
            return;
        }
        if(o<n){
            c.push_back('(');
            backtrack(a,c,o+1,cl,n);
            c.pop_back();
        }
        if(cl<o){
            c.push_back(')');
            backtrack(a,c,o,cl+1,n);
            c.pop_back();
        }
    }
};
