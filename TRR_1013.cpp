#include <bits/stdc++.h>
using namespace std;
int a[105][105];
vector<int> ke[105];
int vao[105],ra[105];
int main() {
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t,n;cin >> t >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
        }
    }
    if(t==1){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]){
                ra[i]++;
                vao[j]++;
            }
        }
    }
        for(int i=1;i<=n;i++){
            cout << vao[i] << " " << ra[i] << endl;
        }
    }
    if(t==2){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]) ke[i].push_back(j);
        }
    }
        cout << n << endl;
        for(int i=1;i<=n;i++){
            cout << ke[i].size() << " ";
            for(int j=0;j<ke[i].size();j++){
                cout << ke[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}