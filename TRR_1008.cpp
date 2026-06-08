#include <bits/stdc++.h>
using namespace std;
vector<int> ke[105];
vector<pair<int,int>> edge;
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin >> t;
    if(t==1){
        int n;cin >> n;
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while (x--){
                int tmp;cin >> tmp;
                ke[i].push_back(tmp);
            }
        }
        for(int i=1;i<=n;i++){
            cout << ke[i].size() << " ";
        }
        cout << endl;
    }
    if(t==2){
        int n;cin >> n;
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while (x--){
                int tmp;cin >> tmp;
                if(i<tmp) edge.push_back({i,tmp});
            }
        }
        cout << n << " " << edge.size() << endl;
        for(int i=0;i<edge.size();i++){
            cout << edge[i].first << " " << edge[i].second << endl;
        }
    }
    return 0;
}