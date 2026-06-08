#include <bits/stdc++.h>
using namespace std;
int n,s,t;
int c[105][105];
int truoc[105];
int d[105];
int vs[105];
int main() {
    freopen("DN.INP","r",stdin);
    freopen("DN.OUT","w",stdout);
    cin >> n >> s >> t;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> c[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        d[i]=20000;
        truoc[i]=0;
    }
    d[s]=0;
    while(true){
        int u=0;
        int min_d=20000;
        for(int i=1;i<=n;i++){
            if(!vs[i] && d[i]<min_d ){
                u=i;
                min_d=d[i];
            }
        }
        vs[u]=1;
        if(u==0 || u==t) break;
        for(int i=1;i<=n;i++){
            if(!vs[i] && c[u][i] <10000){
                if(d[i] > d[u] + c[u][i]){
                    d[i]=d[u] + c[u][i];
                    truoc[i]=u;
                }
            }
        }
    }
    if(d[t]>=10000){
       cout << 0 << endl; 
    }
    else {
        cout << d[t] << endl;
        vector<int> kq;
        int cur=t;
        while (cur!=s){
            kq.push_back(cur);
            cur=truoc[cur];
        }
        kq.push_back(s);
        for(int i=kq.size()-1;i>=0;i--){
            cout << kq[i] << " " ;
        }
    }
    return 0;
}