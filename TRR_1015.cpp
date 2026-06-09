#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int vao[105],ra[105];
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin >> t;
    int n,m;cin >> n >> m;
    if(t==1){
        while (m--){
            int u,v;cin >> u >> v;
            ra[u]++;
            vao[v]++;
        }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] << endl;
        }
    }
    else{
        while (m--){
            int u,v;cin >> u >> v;
            a[u][v]=1;
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