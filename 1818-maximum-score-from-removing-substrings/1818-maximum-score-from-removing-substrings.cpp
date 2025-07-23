class Solution{
public:
    int maximumGain(string s,int x,int y){
        if(x >= y){
            int ans=0;
            string t;
            t.reserve(s.size());
            for(char c: s){
                if(!t.empty() && t.back()=='a' && c=='b'){
                    t.pop_back();
                    ans += x;
                }
                else{
                    t.push_back(c);
                }
            }
            string u;
            u.reserve(t.size());
            for(char c: t){
                if(!u.empty() && u.back()=='b' && c=='a'){
                    u.pop_back();
                    ans += y;
                }
                else{
                    u.push_back(c);
                }
            }
            return ans;
        }
        else{
            int ans=0;
            string t;
            t.reserve(s.size());
            for(char c: s){
                if(!t.empty() && t.back()=='b' && c=='a'){
                    t.pop_back();
                    ans += y;
                }
                else{
                    t.push_back(c);
                }
            }
            string u;
            u.reserve(t.size());
            for(char c: t){
                if(!u.empty() && u.back()=='a' && c=='b'){
                    u.pop_back();
                    ans += x;
                }
                else{
                    u.push_back(c);
                }
            }
            return ans;
        }
    }
};
