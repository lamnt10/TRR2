#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int parent[105];
int vs[105];
int n,u,v;
void bfs(int x){
    vs[x]=1;
    queue<int> q;
    q.push(x);
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            if(!vs[i] && a[tmp][i]==1){
                vs[i]=1;
                parent[i]=tmp;
                if(i==v)
            }
        }
    }
}
int main() {
    int t;cin >> t;
    cin >> n >> u >> v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    if(t==1){
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[u][i] && a[i][v]) cnt++;
        }
        cout << cnt << endl;
    }
    else{

    }
    return 0;
}