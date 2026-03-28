#include<iostream>
#include<string>
using namespace std;

void solve(){
    int t;string s;cin >>t >>s;
    int fc=0,tc=0;char c='O';
    for(auto x:s){
        if(x==c){
            tc++;
        }
        else{
            c=x;
            fc+=tc;
            tc=0;
        }
    }
    fc+=tc;
    cout << fc << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}