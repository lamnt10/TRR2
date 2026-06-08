#include <bits/stdc++.h>
using namespace std;
int a[105][105];
vector<int> ke[105];
int t,n,m;
int b[105][105];
vector<pair<int,int>> canh;
void case1(){
    for(int i=1;i<=n;i++){
        cout << ke[i].size() << " ";
    }
}
void case2(){
    for(int i=0;i<canh.size();i++){
        int x=canh[i].first;int y=canh[i].second;
        b[x][i+1]=1;
        b[y][i+1]=1;
    }
    cout << n << " " << canh.size()<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=canh.size();j++){
            cout << b[i][j] << " ";
        }
        cout <<endl;
    }
}
int main() {
    cin >> t >> n >> m;
    for(int i=1;i<=m;i++){
        int u,v;cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
        canh.push_back({u,v});
    }
    if(t==1) case1();
    else case2();
    return 0;
}