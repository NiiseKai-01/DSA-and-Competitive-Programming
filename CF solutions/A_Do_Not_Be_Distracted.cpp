#include <iostream>
#include <string>
#include <set>
using namespace std;


void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        set<char> st;
        char c=s[0];
        int f=1;
        for(auto x:s){
            if(x!=c && st.find(x)!=st.end()){
                f=0;
                break;
            }
            else{
                c=x;
                st.insert(x);
            }
        }
        if(f){cout << "YES\n";}
        else{cout << "NO\n";}
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}