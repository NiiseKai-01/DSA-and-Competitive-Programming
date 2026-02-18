#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n ; cin >>n;
        int k=10,c=0,b=0;
        while(n>=k){
            c+=9;
            k*=10;
        }
        string s=to_string(n);
        int l=s.size();
        int d=s[0]-'0';
        int temp =d;
        for(int i=1;i<l;i++){
            d = (d*10)+temp;
        }
        if(n>=d){c+=temp;}
        else{c+=temp-1;}
        cout << c << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}