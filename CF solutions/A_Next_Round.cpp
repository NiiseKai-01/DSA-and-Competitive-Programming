#include<iostream>
using namespace std;

void solve(){
    int t,k;cin >>t>>k;
    int ans=0;
    int a[t]; 
    for(auto &x:a){cin >>x;}
    int s=a[k-1];
    for(auto x:a){
        ans+=(x>=s&&x>0);
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}