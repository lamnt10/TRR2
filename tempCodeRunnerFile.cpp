<<<<<<< HEAD
2
5 6 
1 2 1 3 2 3 3 4 3 5 4 5
4 2
1 2 3 4
=======
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
                if(i==v) return;
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
        bfs(u);
        vector<int> ve;
        int curr = v; 
        ve.push_back(curr);
        while (curr != u){
            curr = parent[curr];
            ve.push_back(curr);
        }
        for(int i=ve.size()-1;i>=0;i--){
            cout << ve[i] << " " ;
        }
    }
    return 0;
}
>>>>>>> e709ed9eed26105ce5125a469ed939ff0b1e2e02
