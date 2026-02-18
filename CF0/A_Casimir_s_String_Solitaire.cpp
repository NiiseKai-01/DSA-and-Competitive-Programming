#include <iostream>
#include <string>
using namespace std;


void solve(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int a=0,b=0,c=0;
        for(char &x:s){
            if(x=='A'){a++;}
            if(x=='B'){b++;}
            if(x=='C'){c++;}
        }
        cout << ((a+c==b)?"YES":"NO") << "\n";
    }   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}