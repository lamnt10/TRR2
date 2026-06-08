#include <bits/stdc++.h>
using namespace std;
int n;
int a[105][105];
int vs[105];
vector<int> ke[105];
void dfs(int u){
    vs[u]=1;
    for(int i=1;i<=n;i++){
        if(!vs[i] && a[u][i]){
            dfs(i);
        }
    }
    return ;
}
void case1(){
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]){
                ke[i].push_back(j);
            }
        }
    }
    bool check=1;
    memset(vs,0,sizeof(vs));
    dfs(1);
    for(int i=1;i<=n;i++){
        if(!vs[i]) check=0;
    }
    if(check==0) {
        cout << 0 << endl;
        return;
    }

    int cnt=0;
    for(int i=1;i<=n;i++){
        int deg=0;
        for(int j=1;j<=n;j++){
            deg+=a[i][j];
        }
        if(deg%2==1){
            cnt++;
        }
    }
    if(cnt==0) cout << 1 << endl;
    else if(cnt==2) cout << 2 << endl;
    else cout << 0 << endl;
}
void case2(){
    int u;cin >> u;
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]){
                ke[i].push_back(j);
            }
        }
    }
    stack<int> st;
    vector<int> ce;
    st.push(u);
    while (!st.empty()){
        int check=0;
        int s=st.top();
        for(int i=1;i<=n;i++){
            if(a[s][i]){
                st.push(i);
                a[s][i]=0;a[i][s]=0;
                check=1;
                break;
            }
        }
        if(check==0){
            st.pop();
            ce.push_back(s);
        }
    }
    for(int i=ce.size()-1;i>=0;i--){
        cout << ce[i] << " " ;
    }
}
int main() {
/*     freopen("CT.INP","r",stdin);
    freopen("CT.OUT","w",stdout); */
    int t;cin >> t;
    cin >> n;
    if(t==1) case1();
    else case2();

}