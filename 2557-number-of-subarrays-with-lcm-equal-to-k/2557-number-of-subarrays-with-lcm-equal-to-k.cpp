class Solution {
public:
    int gcd(int a,int b){
        return b==0?a:gcd(b,a%b);
    }
    int lcm(int a,int b){
        return a/gcd(a,b)*b;
    }
    int subarrayLCM(vector<int>& nums,int k){
        int n=nums.size(),ans=0;
        for(int i=0; i<n; i++){
            int l=1;
            for(int j=i; j<n; j++){
                if(k%nums[j]!=0){
                    break;
                }
                l = lcm(l,nums[j]);
                if(l>k){
                    break;
                }
                if(l==k){
                    ans++;
                }
            }
        }
        return ans;
    }
};
