class Solution {
    unordered_map<int,vector<int> > graph;
    vector<int> visited;
    vector<int> color;
public:
    bool dfs(int u){
        visited[u]=1;
        for(auto v:graph[u]){
            if(!visited[v]){
                color[v]=1-color[u];
                if(!dfs(v)){
                    return false;
                }
            }
            else if(color[v]==color[u]){
                return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        for(auto d:dislikes){
            graph[d[0]].push_back(d[1]);
            graph[d[1]].push_back(d[0]);
        }
        color.resize(N+1,-1);
        visited.resize(N+1,0);
        for(int i=1;i<=N;i++){
            if(color[i]==-1){
                color[i]=1;
                if(!dfs(i)){
                    return false;
                }
            }
        }
        return true;
    }
};
