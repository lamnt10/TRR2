#include <bits/stdc++.h>
using namespace std;
vector<int> dinhtru;
int n;
int a[105][105];
vector<int> ke[105];

int vs[105];
void dfs(int u){
    vs[u]=1;
    for(int v:ke[u]) {
        if(!vs[v]) dfs(v);
    }
}
int demtplt(int x){
    vs[x]=1;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(vs[i]==0) {
            dfs(i);
            cnt ++;
        }
    }
    return cnt;
}
int main() {
    freopen("TK.INP","r",stdin);
    freopen("TK.OUT","w",stdout);
    cin >> n ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]) ke[i].push_back(j);
        }
    }
    int bandau=demtplt(0);
    for(int i=1;i<=n;i++){
        memset(vs,0,sizeof(vs));
        int kq=demtplt(i);
        if(kq>bandau) dinhtru.push_back(i);
    }
    cout << dinhtru.size() << endl;
    for(int tmp:dinhtru) cout << tmp << " ";
    return 0;
}