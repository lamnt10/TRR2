#include <bits/stdc++.h>
using namespace std;
int vao[105],ra[105];
int a[105][105];
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin >> t;
    int n;cin >> n;
    if(t==1){
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while (x--){
                int tmp;cin >> tmp;
                vao[tmp]++;ra[i]++;
            }
        }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] << endl;
        }
    }
    else{
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while (x--){
                int tmp;cin >> tmp;
                a[i][tmp]=1;
            }
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