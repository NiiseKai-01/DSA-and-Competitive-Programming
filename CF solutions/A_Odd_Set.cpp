#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int a[2*n],od=0;
        for(auto &x:a){cin >>x;if(x%2){od++;}}    
        if(od==n){cout << "Yes\n";}
        else{cout << "No\n";}
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}