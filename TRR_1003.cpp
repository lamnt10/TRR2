#include <bits/stdc++.h>
using namespace std;
int t,n;
int a[105][105];
int m[1000][1000];
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
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<j && a[i][j]==1){
                cnt++;
                m[i][cnt]=1;
                m[j][cnt]=1;
            }
        }
    }
    cout << n << " " << cnt << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=cnt;j++){
            cout << m[i][j] <<" ";
        }
        cout << endl;
    }
}
int main(){
/*     freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout); */
    cin >> t >> n; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    if(t==1) case1();
    else case2();
}