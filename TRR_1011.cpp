#include <bits/stdc++.h>
using namespace std;
int a[105][105];
vector<int> v;
vector<int> ke[105];

int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin  >> t;
    int n,m;cin >> n >> m;
    if(t==1){
        while (m--){
            int u,v,tmp;cin >> u >> v >> tmp;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            cout << ke[i].size() << " " ;
        }
    }
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j) a[i][j]=0;
                else a[i][j]=10000;
            }
        }
        while (m--){
            int u,v,tmp;cin >> u >> v >> tmp;
            a[u][v]=tmp;a[v][u]=tmp;
        }
        cout << n << endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}