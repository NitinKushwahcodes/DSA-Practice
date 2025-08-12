class Solution {
public:
    static const int MOD=1000000007;
    int dp[305][305];
    
    int dfs(int num,int n,int x){
        if(n==0){
            return 1;
        }
        if(num>300 || n<0){
            return 0;
        }
        if(dp[num][n]!=-1){
            return dp[num][n];
        }
        int p=1;
        for(int i=0; i<x; i++){
            p*=num;
            if(p>n){
                break;
            }
        }
        if(p>n){
            return dp[num][n]=dfs(num+1,n,x)%MOD;
        }
        int t=dfs(num+1,n-p,x)%MOD;
        int s=dfs(num+1,n,x)%MOD;
        return dp[num][n]=(t+s)%MOD;
    }
    
    int numberOfWays(int n,int x){
        memset(dp,-1,sizeof(dp));
        return dfs(1,n,x);
    }
};
