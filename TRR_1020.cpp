#include <bits/stdc++.h>
using namespace std;
int lt[105][105];
int vao[105],ra[105];
int main() {
    freopen("DT.INP", "r",stdin);
    freopen("DT.OUT","w",stdout);)
    int t;cin >> t;
    int n;cin >> n;
    if(t==1){
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while (x--){
                int tmp;cin >> tmp;
                ra[i]++;vao[tmp]++;
            }
        }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] << endl;
        }

    }
    else{
        int cnt=0;
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while (x--){
                cnt++;
                int tmp;cin >> tmp;
                lt[i][cnt]=1;
                lt[tmp][cnt]=-1;
            }
        }
        cout << n << " " << cnt << endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=cnt;j++){
                cout << lt[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}