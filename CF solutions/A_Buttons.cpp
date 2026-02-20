#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int a,b,c; cin >>a>>b>>c;
        int tm_of_anna = a+((c+1)/2);
        int tm_of_katie= b+(c/2);
        cout <<((tm_of_anna>tm_of_katie)?"First\n":"Second\n");
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}