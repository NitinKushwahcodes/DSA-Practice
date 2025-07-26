class Solution {
public:
    vector<string> letterCombinations(string digits){
        if(digits.empty()){
            return {};
        }
        static const vector<string> m={
            "","",   "abc","def",
            "ghi","jkl","mno","pqrs",
            "tuv","wxyz"
        };
        vector<string> a;
        string c;
        backtrack(digits,0,c,a,m);
        return a;
    }
private:
    void backtrack(const string& d,int i,string& c,vector<string>& a,const vector<string>& m){
        if(i==d.size()){
            a.push_back(c);
            return;
        }
        int x=d[i]-'0';
        for(char ch:m[x]){
            c.push_back(ch);
            backtrack(d,i+1,c,a,m);
            c.pop_back();
        }
    }
};
