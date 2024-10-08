class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        vector<int>dp(pairs.size());
        dp[0]=1;
        for(int i=1;i<pairs.size();i++){
            dp[i]=1;
            for (int j=0;j<i;j++){
                if(pairs[j][1]<pairs[i][0])
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    int ans=0;
    for(auto v:dp){
        ans=max(ans,v);
    }
    return ans;
    }
};