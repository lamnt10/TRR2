#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int vao[105],ra[105];
int n,m;
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin >> t >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) a[i][j]=0;
            else a[i][j]=10000;
        }
    }
    for(int i=1;i<=m;i++){
        int x,y,w;cin >> x >> y >> w;
        ra[x]++;vao[y]++;
        a[x][y]=w;
    }
    if(t==1){
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] << endl;
        }
    }
    else{
        cout << n << endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << a[i][j] << " " ;
            }
            cout << endl;
        }
    }
    return 0;
}