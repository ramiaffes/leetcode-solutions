class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        map<string,bool>vis;
        for(int i=0;i<nums.size();i++){vis[nums[i]]=1;}
        int tot=1<<n;
	for(int mask=0;mask<tot;mask++){
		string res;
		for(int i=0;i<n;i++){
			int f=1<<i;
			if(mask&f){
res.append("1");
				}
			else{
				res.append("0");}}
            if(vis[res]==0)return res;
		}
    return " ";
    }
};