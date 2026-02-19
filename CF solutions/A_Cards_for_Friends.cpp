#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int w,h,n;
        cin >>w>>h>>n;
        int c=1;
        while(w%2==0){
            c*=2;w/=2;
        }
        while(h%2==0){
            c*=2;h/=2;
        }
        if(c>=n){cout << "YES\n";}
        else{cout << "NO\n";}
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}