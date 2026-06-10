#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> edge;
int ra[105],vao[105];

int main() {
    freopen("DT.INP" , "r" ,stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin >> t;
    int n;cin >> n;
    if(t==1){
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while(x--){
                int tmp;cin >> tmp;
                ra[i]++;vao[tmp]++;
            }
        }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] << endl;
        }
    }    
    else{
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while (x--){
                int tmp;cin >> tmp;
                edge.push_back({i,tmp});
            }
        }
        cout << n << " " << edge.size() << endl;
        for(int i=0;i<edge.size();i++){
            cout << edge[i].first << " " << edge[i].second << endl;
        }
    }
    return 0;
}