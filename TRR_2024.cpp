#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> dinhtru;
int a[105][105];
int vs[105];
void bfs(int u){
    vs[u]=1;
    queue<int> q;
    q.push(u);
    while (!q.empty()){
        int tmp=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            if(!vs[i] && a[tmp][i]){
                vs[i]=1;
                q.push(i);
            }
        }
    }
}
int tplt(int i){
    memset(vs,0,sizeof(vs));
    if(i>0) vs[i]=1;

    int cnt=0;
    for(int j=1;j<=n;j++){
        if(!vs[j]){
            cnt++;
            bfs(j);
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
        }
    }
    int cnt=0;    
    int bd=tplt(-1);
    for(int i=1;i<=n;i++){
        if(tplt(i)>bd) {
            cnt++;
            dinhtru.push_back(i);
        }
    }
    cout << cnt << endl;
    if(cnt==0) ;
    else {
        sort(dinhtru.begin(),dinhtru.end());
        for(int i=0;i<dinhtru.size();i++){
            cout << dinhtru[i] << " ";
        }
    }
    return 0;
}