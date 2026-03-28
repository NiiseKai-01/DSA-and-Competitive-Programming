#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s; cin >>s;
    int f=0;
    for(auto x:s){
        if(x=='H'||x=='Q'||x=='9'){
            f=1;
            break;
        }
    }
    if(f){cout << "YES\n";}
    else{cout << "NO\n";}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}