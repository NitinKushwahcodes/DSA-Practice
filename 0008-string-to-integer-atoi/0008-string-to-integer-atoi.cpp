class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size(),sign=1;
        while(i<n && isspace(s[i])) i++;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') sign=-1;
            i++;
        }
        long long res=0;
        bool digit=0;
        while(i<n && isdigit(s[i])){
            digit=1;
            res=res*10+(s[i]-'0');
            if(sign==1 && res>INT_MAX){
                res=INT_MAX;
                break;
            }
            if(sign==-1 && res>(long long)INT_MAX+1){
                res=(long long)INT_MAX+1;
                break;
            }
            i++;
        }
        if(!digit) return 0;
        res*=sign;
        if(res>INT_MAX) return INT_MAX;
        if(res<INT_MIN) return INT_MIN;
        return (int)res;
    }
};
