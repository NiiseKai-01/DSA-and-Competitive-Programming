#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    long long n,k; cin >>n>>k;
    long long x= (n+1)/2,ans;
    if(k<=x){
        ans=(2*k)-1;
        cout << ans << "\n";
    }
    else{
        ans=2*(k-x);
        cout << ans << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}