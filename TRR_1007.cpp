#include <bits/stdc++.h>
using namespace std;
int mt[105][105];
vector<int> ke[105];
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t;cin >> t;
    if(t==1){
        int n;cin >> n; 
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while(x--){
                int tmp;cin >> tmp;
                ke[i].push_back(tmp);
            }
        }
        for(int i=1;i<=n;i++){
            cout << ke[i].size()<< " ";
        }
        cout << endl;
    }    
    else {
        int n;cin >> n; 
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            while(x--){
                int tmp;cin >> tmp;
                mt[i][tmp]=1;
            }
        }
        cout << n << endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << mt[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}