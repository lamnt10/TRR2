#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int vao[105];
int ra[105];
vector<pair<int,int>> edge;
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t,n;cin >> t >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }    
    if(t==1){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]){
                    ra[i]++;
                    vao[j]++;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i]  << endl;
        }
    }
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]) edge.push_back({i,j});
            }
        }
        cout << n << " " << edge.size() << endl;
        for(int i=0;i<edge.size();i++){
            cout << edge[i].first << " " << edge[i].second << endl;
        }
    }
    return 0;
}