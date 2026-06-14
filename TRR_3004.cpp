#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int at[105][105];
int n;
int vs[105];
int vao[105],ra[105];
void dfs(int x){
    vs[x]=1;
    for(int i=1;i<=n;i++){
        if(!vs[i] && at[x][i]){
            dfs(i);
        }
    }
}
bool checklt(){
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(!vs[i]){
                dfs(i);
                cnt++;
            }
        }
        if(cnt==1) return true;
        return false;
}
int checkeuler(){
    int a=0;int b=0;
    for(int i=1;i<=n;i++){
        if(abs(vao[i]-ra[i])>1) return 0;
        if((vao[i]-ra[i])==1) a++;
        if((ra[i]-vao[i])==1) b++;
    }
    if(a==b && a==0) return 1;
    if(a==b && a==1) return 2;
    return 0;
}
int main() {
    freopen("CT.INP","r",stdin);
    freopen("CT.OUT","w",stdout);
    int t;cin >> t;
    cin >> n;

    if(t==1){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]){
                    ra[i]++;vao[j]++;
                    at[i][j]=1;
                    at[j][i]=1;
                }
            }
        }
        if(!checklt()) cout << 0 << endl;
        else cout << checkeuler() << endl;
        


    }
    else{
        int u;cin>> u;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> a[i][j];
            }
        }
        stack<int> st, kq;
        st.push(u);
        while (!st.empty()){
            int check=0;
            int tmp=st.top();
            for(int i=1;i<=n;i++){
                if(a[tmp][i]){
                    st.push(i);
                    check=1;
                    a[tmp][i]=0;
                    break;
                }
            }
            if(check==0){
                kq.push(tmp);
                st.pop();
            }
        }
        while (!kq.empty()){
            cout << kq.top() <<" ";
            kq.pop();
        }

    }
    return 0;
}