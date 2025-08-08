class Solution {
    public double soupServings(int n){
        if(n>=4800){
            return 1.0;
        }
        int N=(n+24)/25;
        Double[][] dp=new Double[N+1][N+1];
        return dfs(N,N,dp);
    }
    private double dfs(int a,int b,Double[][] dp){
        if(a<=0 && b<=0){
            return 0.5;
        }
        if(a<=0){
            return 1.0;
        }
        if(b<=0){
            return 0.0;
        }
        if(dp[a][b]!=null){
            return dp[a][b];
        }
        dp[a][b]=0.25*(
            dfs(a-4,b,dp)+
            dfs(a-3,b-1,dp)+
            dfs(a-2,b-2,dp)+
            dfs(a-1,b-3,dp)
        );
        return dp[a][b];
    }
}
