#include <bits/stdc++.h>
using namespace std;
vector<int> ke[105];
int vs[105];
int a[105][105];
vector<pair<int,int>> edge;
int n;
void dfs(int u,int s,int t){
    vs[u]=1;
    for(int v:ke[u]){
        if(u==s && v==t || v==s && u==t){
            continue;
        }
        if(!vs[v]) dfs(v,s,t);
    }
}

int tplt(int s,int t){
    memset(vs,0,sizeof(vs));
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            dfs(i,s,t);
            cnt++;
        }
    }
    return cnt;
}
int main() {
    freopen("TK.INP","r",stdin);
    freopen("TK.OUT","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
           if(a[i][j]) {
            ke[i].push_back(j);
            if(i<j) edge.push_back({i,j});
        }
        }
   }
   set<pair<int,int>> kq;
   int bd=tplt(-1,-1);
   for(auto c:edge){
        int kt=tplt(c.first,c.second);
        if(kt>bd) {
            kq.insert(c);
        }
   }
   cout << kq.size()<< endl;
   for(auto c:kq){
    cout << c.first << " " << c.second << endl;
   }

    return 0;
}