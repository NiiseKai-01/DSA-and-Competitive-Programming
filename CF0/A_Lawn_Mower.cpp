#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n,w; cin >>n>>w;
        n-=(n/w);
        cout << n << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}