#include <bits/stdc++.h>
using namespace std;

int parent[105],sz[105];
struct canh{
    int x,y,w;
};
vector<canh> dscanh;
vector<canh> kq;
int n,m; 
void init(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int Find(int u){
    if(u==parent[u]) return u;
    return parent[u]=Find(parent[u]);
    
}
bool Union(int u,int v){
    u=Find(u);
    v=Find(v);
    if(u==v) return false;
    else{
        if(sz[u]>sz[v]) {
            parent[v]=u;
            sz[u]+=sz[v];
        }
        else{
            parent[u]=v;
            sz[v]+=sz[u];
        }
    }
    return true;
}
bool cmp(canh a,canh b){
    if(a.w==b.w){
        if(a.x==b.x) return a.y<b.y;
        return a.x<b.x;
    }
    return a.w<b.w;
}
int main() {
    freopen("CK.INP","r",stdin);
    freopen("CK.OUT","w",stdout);
    cin >> n >> m;
    init();
    for(int i=1;i<=m;i++){
        canh ed;
        cin >> ed.x >> ed.y >> ed.w;
        dscanh.push_back(ed);
    }
    sort(dscanh.begin(),dscanh.end(),cmp);
    int d=0;
    for(int i=0;i<dscanh.size();i++){
        if(Union(dscanh[i].x,dscanh[i].y)) {
            kq.push_back(dscanh[i]);
            d+=dscanh[i].w;
        }
        if(kq.size()==n-1) break;
    }
    if(kq.size()==n-1) {
        cout << d << endl;
        for(int i=0;i<kq.size();i++){
            cout << kq[i].x << " " << kq[i].y << " " << kq[i].w << endl;
        }
    }
    else cout << 0 ;
    return 0;
}