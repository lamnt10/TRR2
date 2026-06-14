#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int vs[105];
int cnt=0,n;
vector<int> tplt[105];
void bfs(int u){
    vs[u]=1;
    queue<int> q;
    q.push(u);
    tplt[cnt].push_back(u);
    while (!q.empty()){
        int tmp=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            if(a[tmp][i] && vs[i]==0){
                q.push(i);
                vs[i]=1;
                tplt[cnt].push_back(i);
            }
        }
    }
}
int main() {
    freopen("TK.INP","r",stdin);
    freopen("TK.OUT","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            cnt++;
            bfs(i);
        }
    }
    for(int i=1;i<=n;i++){
        sort(tplt[i].begin(),tplt[i].end());
    }
    cout << cnt << endl;
    for(int i=1;i<=n;i++){
        for(int j=0;j<tplt[i].size();j++){
            cout << tplt[i][j] << " " ;
        }
        cout << endl;
    }

    return 0;
}