map<string,set<string>>dp;
void func(string tiles){
    if(tiles.length()==0)return;
    for(int i=0;i<tiles.length();i++){
        string str=tiles;
        string val(1,str[i]);
        str.erase(i,1);
        sort(str.begin(),str.end());
        if(dp[str].empty()){
            func(str);
        }
        for(auto v:dp[str]){
            string str2=v;
            str2.insert(0,val);
            dp[tiles].insert(str2);
            dp[tiles].insert(val);
           
        }
    dp[tiles].insert(tiles);
    
    }
}
class Solution {
public:
    int numTilePossibilities(string tiles) {
func(tiles);
for(auto v:dp[tiles])cout<<v<<endl;
    return dp[tiles].size();
    }
};