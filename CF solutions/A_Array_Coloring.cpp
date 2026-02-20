#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;int a[n],s=0;
        for(auto &x:a){cin >> x;s+=(x%2);}
        int s2=s/2;
        cout << ((2*s2==s)?"YES\n":"NO\n");
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}