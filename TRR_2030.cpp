#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> ke[105];
vector<pair<int,int>> edge;
int vs[105];
bool bfs(int s,int t){
    memset(vs,0,sizeof(vs));
    queue<int> q;
    q.push(s);
    vs[s]=1;
    while(!q.empty()){
        int u=q.front();q.pop();
        if(u==t) return false;
        for(int v:ke[u]){
            if(u==s && v==t || u==t && v==s) continue;
            if(!vs[v]){
                vs[v]=1;
                q.push(v);
            }
        }
    }
    return true;
}
int main() {
    freopen("TK.INP","r",stdin);
    freopen("TK.OUT","w",stdout);
    cin>> n;
    for(int i=1;i<=n;i++){
        int x=0;
        for(int j=1;j<=n;j++){
            cin >> x;
            if(x) {
                ke[i].push_back(j);
                if(i<j) edge.push_back({i,j});
            }
        }
    }
    set<pair<int,int>> s;
    for(auto c:edge){
        if(bfs(c.first,c.second)) s.insert(c);
    }
    cout << s.size() << endl;
    for(auto c:s) cout << c.first << " " << c.second << endl;
    return 0;
}