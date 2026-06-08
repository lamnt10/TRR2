#include <bits/stdc++.h>
using namespace std;
int b[105][105];
vector<int> a[105];
int t,n;
void case1(){
    for(int i=1;i<=n;i++){
        cout << a[i].size() << " ";
    }
}
void case2(){
    cout << n << endl;
    for(int i=1;i<=n;i++){
        cout << a[i].size()<< " ";
        for(int x:a[i]) cout << x << " ";
        cout << endl;
    }
}
int main(){
/*     freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout); */
    cin >> t >> n; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> b[i][j];
            if(b[i][j]) a[i].push_back(j);
        }
    }
    if(t==1){
        case1();
    }
    else case2();

}