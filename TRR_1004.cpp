#include <bits/stdc++.h>
using namespace std;
int t,n,m;
int a[105][105];
void case1(){
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(a[i][j]) cnt++;
        }
        cout << cnt << " ";
    }
    cout << endl;
}
void case2(){
    cout << n << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
/*     freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout); */
    cin >> t >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        a[x][y]=1;a[y][x]=1;
    }
    if(t==1) case1();
    else case2();
}