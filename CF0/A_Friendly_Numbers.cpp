#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        if(n%9==0 && n%10!=0){
            cout << 10 <<"\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}