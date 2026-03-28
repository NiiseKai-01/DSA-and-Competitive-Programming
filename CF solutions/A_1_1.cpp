#include <iostream>
#include <string>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n;
        string s; cin>>n>>s;
        int mn=0,mx=0,to=0;
        for(auto x:s){
            if(x=='1'){
                to++;
            }
        }
        for (int i=0;i<n-2;i++){
            if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'){
                mx++;
            }
        }
        for (int i=0;i<n-2;i++){
            if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'){
                mn++;
                i++;
            }
        }
        cout << to-mn << " "<< to+mx <<"\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}