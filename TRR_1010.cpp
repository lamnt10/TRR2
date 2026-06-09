#include <bits/stdc++.h>
using namespace std;
int a[105][105];
vector<int> ke[105];
vector<pair<int,int>> edge;
vector<int> v;
int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t;cin >> t;
        int n;cin >> n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> a[i][j];
            }
        }
    if(t==1){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]<=50 && a[i][j]!=0){
                    ke[i].push_back(j);
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout << ke[i].size() << " ";   
        }
        cout << endl;
    }
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]<=50 && a[i][j]!=0){
                    if(i<j){
                        v.push_back(a[i][j]);
                        edge.push_back({i,j});
                    }      
                }
            }
        }
        cout << n << " " << edge.size() << endl;
        for(int i=0;i<edge.size();i++){
            cout << edge[i].first << " " << edge[i].second << " " << v[i] << endl;
        }
    }

    return 0;
}