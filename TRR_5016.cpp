#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int Next[105][105],d[105][105];
int main() {
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            d[i][j]=a[i][j];
            if(i!=j && a[i][j]<10000){
                Next[i][j]=j;
            }
            else Next[i][j]=-1;
        }
    }
    
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][j]>d[i][k]+d[k][j]){
                    d[i][j]=d[i][k]+d[k][j];
                    Next[i][j]=Next[i][k];
                }
            }
        }
    }
    int u=-1,v=-1;int max_val=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j && d[i][j] >max_val && d[i][j]<10000) {
                u=i;v=j;
                max_val=d[i][j];
            }
        }
    }
    if(u!=-1){
        cout << u << " " << v << " " << d[u][v] << endl;
        while (u!=-1){
            cout << u << " ";
            if(u==v) break;
            u=Next[u][v];
        }
    }
    return 0;
}