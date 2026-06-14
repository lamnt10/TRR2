#include <bits/stdc++.h>
using namespace std;
int a[105][105];
 int n;
int cnt=0;
vector<int> tplt[105];
int vs[105];
void dfs(int u){
    vs[u]=1;
    tplt[cnt].push_back(u);
    for(int i=1;i<=n;i++){
        if(a[u][i] && vs[i]==0){
            dfs(i);
        }
    }
}
int main() {
    freopen("TK.INP","r",stdin);
    freopen("TK.OUT","w",stdout);
   cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }    
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            cnt++;
            dfs(i);
        }
    }
    for(int i=1;i<=cnt;i++){
        sort(tplt[i].begin(),tplt[i].end());
    }
    cout << cnt << endl;
    for(int i=1;i<=cnt;i++){
        for(int j=0;j<tplt[i].size();j++){
            cout << tplt[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}