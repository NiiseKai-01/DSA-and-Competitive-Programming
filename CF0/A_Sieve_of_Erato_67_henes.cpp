#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n;cin >>n;
        int a[n]; for(int &x:a){cin >>x;}
        sort(a,a+n);
        if(a[n-1]==67){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
