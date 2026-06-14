#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int n;
int vao[105],ra[105];
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin >> t >> n;
    int cnt =0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]!=0 && a[i][j]!=10000) cnt++;
        }
    }
    if(t==1){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]!=0 && a[i][j]!=10000){
                ra[i]++;vao[j]++;
            }
        }
    }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] << endl;
        }
    }
    else{
    cout << n << " " << cnt << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]!=0 && a[i][j]!=10000){
                cout << i << " " << j << " " << a[i][j] << endl;
            }
        }
    }
    }
    return 0;
}