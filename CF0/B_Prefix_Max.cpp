#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int &x:a){
            cin >>x;
        }
        int m=0;
        for(int &x:a){
            m=max(m,x);
        }
        cout << n*m << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}