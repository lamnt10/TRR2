#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int found=0;
int visited[105];
int parent[105];
int n,u,v;
int case1(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[u][i] && a[i][v]) cnt++;
    }
    return cnt;
}
void dfs(int tmp){
    visited[tmp]=1;
    if(tmp==v) {
        found=true;
        return;
    }
    for(int i=1;i<=n;i++){
        if(a[tmp][i] && visited[i]==0){
            parent[i]=tmp;
            dfs(i);
            if(i==v) return ;
            
        }
    }
    return;
}

int main() {
    freopen("TK.INP","r",stdin);
    freopen("TK.OUT","w",stdout);
    int t;cin >> t;
    cin >> n >> u >> v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    if(t==1){
        cout << case1() << endl;
    }
    else{
        vector<int> ve;
        dfs(u) ;
        ve.push_back(v);
        while (v!=u){
            v=parent[v];
            ve.push_back(v);
        }
        for(int i=ve.size()-1;i>=0;i--){
            cout << ve[i] << " ";
        }
    }

    return 0;
}