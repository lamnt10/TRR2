#include <bits/stdc++.h>
using namespace std;
//union : gop
//find : tim dai dien
int n,m;
int parent[1005];
void init(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
}
int Find(int u){
    if(u=parent[u]) return u;
    else{
        u=Find(parent[u]);
        
    }
}
bool Union(int u,int v){
    u=Find(u);
    v=Find(v);
    if(u==v) return false;
    if(u<v) parent[v]=u;
    else parent[u]=v;
    return true;
}
int main() {
    // dem tplt
    int t;cin >> t;
    while(t--){
        cin >> n >> m;
        memset(parent,0,sizeof(parent));
        init();
        for(int i=1;i<=m;i++){
            int x,y;cin >> x >> y;
            if(Union(x,y)) n--;
        }
        cout << n << endl;
    }
    return 0;

}