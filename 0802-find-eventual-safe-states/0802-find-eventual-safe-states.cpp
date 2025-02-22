map<long long int,vector<long long int>>adj;
map<long long int,bool>vis1;
map<long long int,bool>vis;
void dfs(long long int u){
    if(vis[u]==1)return;
	vis[u]=1;
    if(adj[u].empty()){vis1[u]=1;return;}
    int som=0;
	for(auto v:adj[u]){
		dfs(v);if(vis1[v]==1)som++;}
if(som==adj[u].size())vis1[u]=1;}
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>res;
        vis.clear();
        vis1.clear();adj.clear();
        for(int i=0;i<graph.size();i++){
            for(auto v:graph[i]){
                adj[i].push_back(v);
            }
        }
    for(int i=0;i<graph.size();i++){
        if(vis[i]==0)dfs(i);
    }
    for(int i=0;i<graph.size();i++){
        if(vis1[i]==1)res.push_back(i);
    }
        
     return res;   
    }
};