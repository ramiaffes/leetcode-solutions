class Solution {
public:
    int minSteps(int n) {
        map<int,int>dp;
         for(int j=1;j<=n;j++){
             dp[j]=j;
         }
         dp[1]=0;
        for(int j=1;j<=n;j++){
            for(int i=1;i<=j;i++){
                if(j%i==0){
                dp[j]=min(dp[j],dp[i]+((j/i)));}
            }
        }
    return dp[n];
    }
};