#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int a[n];
        for(auto &x:a){cin >>x;}
        int mn=a[1]-a[0];
        for(int i=1;i<n-1;i++){
            if((a[i+1]-a[i])<mn){
                mn=a[i+1]-a[i];
            }
        }
        int ans=(mn/2)+1;
        if(mn<0){cout << 0<<"\n";}
        else{cout << ans <<"\n";}

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}