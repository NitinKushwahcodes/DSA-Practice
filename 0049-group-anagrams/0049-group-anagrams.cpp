class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        unordered_map<string,vector<string>> m;
        for(string s : a){
            string t=s;
            sort(t.begin(),t.end());
            m[t].push_back(s);
        }
        vector<vector<string>> r;
        for(auto &x : m){
            r.push_back(x.second);
        }
        return r;
    }
};