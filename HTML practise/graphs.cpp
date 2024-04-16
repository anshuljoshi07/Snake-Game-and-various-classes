#include <bits/stdc++.h>
using  namespace std;

//TOPOLOGICAL
//0-1 BFS 
//DJK
//PRIMS
//BEllMAN- FORD
//DSU (compression)
//biparitie
//M coloring 

vector<int> topo_dfs_helper(vector<vector<int>>G, int src, vector<int>order, vector<int>vis){

vis[src]=1;
for( int i : G[src]){
    if(vis[i]==-1){
      vector<int>new_order=  topo_dfs_helper(G,i,order,vis);
    }
}
new_order.push_back(src);
return new_order;

}

vector<int> topological_dfs (vector<vector<int>>G){
vector<int>order;
vectopr<int>vis(G.size(),-1);
topo_dfs_helper(G, src , order,vis);
}

vector<int> topological_bfs (vector<vector<int>>G){
vector<int>in_degree(G.size(),0);
vector<int>out_degree(G.size(),0);
//assuming graph is having nodes btw 0 to n-1
for(int i=0;i<G.size();i++){
    for(int n : G[i]){
        in_degree[n]++;
        out_degree[i]++;
    }
}
vector<int>order;
queue<int>q;
for(int i=0;i<G.size();i++){
    if(in_degree[i]==0){
        q.push_back(i);
    }
}
while(!q.empty()){
    int f = q.front();
    q.pop();
    order.push_back(f);
    for(int i : G[f]){
        in_degree[i]--;
        if(in_degree[i]==0){
            q.push(i);
        }
    }
}
return order;



}



int O1BFS_SHORTEST_DIST_FROM_SRC_DEST_IN_1_0_edge_weights (int src , int dest , vector<vector<int>>G ){
    //here G[i][j]--->> edge weights
    queue<pair<int,int>>q1;
    queue<pair<int,int>>q2;
     queue<pair<int,int>>q3;
    
    vector<int>vis(G.size(),-1);
    q1.push({src,0});


    while(!q1.empty()){
        pair<int,int> f  = q1.front();
        q1.pop();
        vis[f.first]=1;
        if(f.first==dest)return f.second;
        for(int i=0;i<G.size();i++){
            if(G[f.first][i]==0){
                q1.push({i,f.second});
            }
              if(G[f.first][i]==1){
                q2.push({i,f.second+1});
            }
        }
        if(q1.size()==0){
            q1=q2;
            q2=q3;
        }
    }



}

vector<int> SINGLE_SOURCE_SHORTEST_DIST_DJKSTRA(int src, vector<vector<int>>G){
    vector<int>dist(G.size(),INT_MAX);
    dist[src]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    pq.insert({0,src});
    while(!pq.empty()){
        pair<int,int> f = pq.top();
        pq.remove(f);
        if(dist[f]!=INT_MAX)continue;


        dist[f.second]=f.first;
        for(int i=0;i<G.size();i++){
            if(G[f.second][i]!=-1)
            int dist = G[f.second][i];
            pq.insert({f.first+dist, i});
        }

    }
}

int prims (vector<vector<int>>G){
    int n = G.size();
      priority_queue<pair<int,int>>pq;
      pq.insert({0,0});
      vector<int>vis(n-1,-1);
      vis[0]=1;
      int MSP=0;
      while(!pq.empty()){
        pair<int,int> f = pq.front();
        pq.pop();
        if(vis[f.second]==1)continue;
        MSP+=f.first;
        for(int nei =0; nei<=n;nei++){
            if(vis[nei]==1)continue;
            pq.push({G[f][nei], nei});
        }
      }
      return MSP;
}

//for all pairs shortest path and even with negative weights ..its like a DP with assumption that with n-1 operations in non cyclic graph we can get answers requoired
//its only for 
int Bellman_ford(vector<vector<int>>G){

int n = G.size();
vector<int>dist(n,INT_MAX);
dist[0]=0;
for(int i=1;i<n;i++){

    for(int src=0;src<n;src++){
        for(int nei = 0;nei<n;nei++ ){
            if(src==nei)continue;
            if(G[src][nei]==-1)continue;
            if(dist[nei]>dist[src]+G[src][nei]){
                dist[nei]=dist[src]+G[src][nei];
            }
        }
    }
}

}

//M coloring problem with possibility of cycles
//bidirected
vector<int>color_options;
bool M_color(int par,vector<vector<int>>G, vector<int>&color, int src){

for(int i=0;i<color_options.size();i++){
int curr_color = color_options[i];
int flag=1;
for(int nei : G[src]){
    if(curr_color==color[nei]){
        flag=0;
        continue;
    }
}
if(flag==0)continue;

//if here then this curr_color is safe and no parent or neighbour has it ..so traverse to all non parents


}


}


vector<int> dfs_M_coloring(src, vector<vector<int>>G){
vector<int>par(n,-1);
vector<int>color(n,-1);





}



// DSU


















int main(){

}
