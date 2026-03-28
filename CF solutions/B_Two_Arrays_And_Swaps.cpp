#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n,k; cin >>n>>k;
        vector<int> a(n),b(n);
        for(auto &x:a){cin >>x;}
        for(auto &x:b){cin >>x;}
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        int c=0,i=0;
        while(k--){
            if(a[i]<b[i]){
                a[i]=b[i];
            }
            i++;
        }
        for(auto x:a){c+=x;}
        cout << c << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}