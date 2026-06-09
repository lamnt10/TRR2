#include <bits/stdc++.h>
using namespace std;
int lt[105][105];
int a[105][105];
int vao[105],ra[105];
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t,n;cin >> t >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    if(t==1){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]){
                    ra[i]++;
                    vao[j]++;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] <<endl;
        }
    }
    else{
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]){
                    cnt++;
                    lt[i][cnt]=1;
                    lt[j][cnt]=-1;
                }
            }
        }
        cout << n << " " << cnt << endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=cnt;j++){
                cout << lt[i][j] << " " ;
            }
            cout <<endl;
        }
    }
    return 0;
}