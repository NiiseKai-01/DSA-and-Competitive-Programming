#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        string s; cin >>s;
        int n = stoi(s);
        int sqt = ceil((sqrt(n)));
        if(sqt*sqt==n){
            cout << 0 << " " << sqt << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}