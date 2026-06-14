#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> edge;
int a[105][105];
int vs[105];
int n;
void dfs(int x){
    vs[x]=1;
    for(int i=1;i<=n;i++)
    {
        if(!vs[i] && a[x][i]){
            edge.push_back({x,i});
            dfs(i);
        }
    }
}
void bfs(int x){
    queue<int> q;
    q.push(x);
    vs[x]=1;
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            if(!vs[i] && a[tmp][i]){
                q.push(i);
                vs[i]=1;
                edge.push_back({tmp,i});
            }
        }
    }
}
int main() {
    freopen("CK.INP","r",stdin);
    freopen("CK.OUT","w",stdout);
    int t;cin >> t;
    cin >> n;int u;cin >> u;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    if(t==1) dfs(u);
    else bfs(u);
    int m=edge.size();
    if(m==n-1){
        cout << m << endl;
        for(int i=0;i<m;i++){
            cout << min(edge[i].first ,edge[i].second)<< " " << max(edge[i].first ,edge[i].second) << endl;
        }
    }
    else cout << 0 << endl;
    return 0;
}