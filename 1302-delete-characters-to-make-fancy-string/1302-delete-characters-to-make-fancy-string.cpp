class Solution {
public:
    string makeFancyString(string s){
        string a;
        a.reserve(s.size());
        for(char c:s){
            int l = a.size();
            if(l>=2 && a[l-1]==c && a[l-2]==c){
                continue;
            }
            a.push_back(c);
        }
        return a;
    }
};
