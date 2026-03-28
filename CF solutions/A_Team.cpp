#include <iostream>
using namespace std;

void solve(){
    int t,ans=0; cin >>t;
    while(t--){
        int a,b,c;
        cin >>a>>b>>c;
        ans+=(a+b+c>=2);
    }
    cout << ans <<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}