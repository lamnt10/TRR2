#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
/*     freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout); */
    int t;cin >> t;
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j] && i<j ){
                cnt++;
            }
        }
    }
    if(t==1){
        
        for(int i=1;i<=n;i++){
            int cnt2=0;    
            for(int j=1;j<=n;j++){
                if(a[i][j]) cnt2++;
            }
            cout << cnt2 << " ";
        }
        cout << endl;
    }
    else {
        cout << n << " " << cnt << endl;;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
            {
                if(a[i][j] && i<j){
                    cout << i << " " << j << endl;
                }
            }
        }
    }

}