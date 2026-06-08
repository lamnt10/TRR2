#include <bits/stdc++.h>
using namespace std;
int n,s,t;
int c[105][105];
int truoc[105];
int d[105];
int main() {
    freopen("BN.INP","r",stdin);
    freopen("BN.OUT","w",stdout);
    cin >> n >> s >> t;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> c[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        d[i]=10000;
        truoc[i]=s;
    }
    d[s]=0;
    int k=1;
        while(k<=n-1){    
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(d[j]!=10000)
                        if(d[i] > d[j]+c[j][i]) {
                        d[i]=d[j]+c[j][i];
                        truoc[i]=j;
                    }           
                }
            }
            k++;
        }
    int checkchutrinham=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[i]>d[j]+c[j][i]) checkchutrinham=1;
        }
    }
    if(checkchutrinham) cout << -1 ;
    else if(d[t]==10000) cout << 0;
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
            cout << kq[i] << " ";
        }
    }
    return 0;
}