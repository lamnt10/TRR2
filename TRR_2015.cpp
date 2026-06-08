#include <bits/stdc++.h>
using namespace std;
int n;
int a[105][105];
int at[105][105];
vector<int> ke[105];
vector<int> keat[105];
vector<int> nen[105];
stack<int> topo;
int vs[105];
void dfs3(int u){
    vs[u]=1;
    for(int v:nen[u]){
        if(!vs[v]){
            dfs3(v);
        }
    }
    return;
}

int checkltyeu(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]){
                nen[i].push_back(j);
                nen[j].push_back(i);
            }
        }
    }
    int cnt=0;
    memset(vs,0,sizeof(vs));
    for(int i=1;i<=n;i++){
        if(!vs[i]) {
            cnt++;
            dfs3(i);
        }
    }
    if(cnt==1) return 1;
    else return 0;
}
void dfs1(int u){
    vs[u]=1;
    for(int v:ke[u]){
        if(!vs[v]){
            dfs1(v);
        }
    }
    topo.push(u);
    return;
}
void dfs2(int u){
    vs[u]=1;
    for(int v:keat[u]){
        if(!vs[v]){
            dfs2(v);
        }
    }
    return;
}

int checkltmanh(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]) ke[i].push_back(j);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(at[i][j]) keat[i].push_back(j);
        }
    } 
    memset(vs,0,sizeof(vs));
    dfs1(1);
    for(int i=1;i<=n;i++) if(!vs[i]) return 0;
    memset(vs,0,sizeof(vs));
    dfs2(1);
    for(int i=1;i<=n;i++) if(!vs[i]) return 0;
    return 1;
}
int main() {
    freopen("TK.INP","r",stdin);
    freopen("TK.OUT","w",stdout);
    cin >> n ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]) at[j][i]=1;
        }
    }
    int tmp=checkltyeu();
    int tmp2=checkltmanh();
    if(tmp && tmp2==0) cout << 2 << endl;
    else if(tmp2 && tmp) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}