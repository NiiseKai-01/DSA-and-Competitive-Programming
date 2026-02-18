#include <iostream>
using ll = long long;
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        ll x,y; cin >>x>>y;
        ll m = y%3;
        if(x%2==0&&y%2==0&&x/2==y/3){
            cout << "Bob\n";
        }
        else if((x-m)%2==0&&(x-m)/2==(y-m)/3){
            cout << "Bob\n";
        }
        else {
            cout << "Alice\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}