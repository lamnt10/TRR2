#include <bits/stdc++.h>
using namespace std;
int t,n,m;
vector<int> a[105];
void case1(){
    for(int i=1;i<=n;i++){
        cout << a[i].size() << " ";
    }
    cout << endl;
}
void case2(){
    cout << n << endl;
    for(int i=1;i<=n;i++){
        cout << a[i].size()<<" ";
        for(int x:a[i]) cout << x << " ";
        cout << endl;
    }

}
int main(){
/*     freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout); */
    cin >> t >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    if(t==1) case1();
    else case2();
}